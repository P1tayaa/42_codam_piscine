/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 20:45:20 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/24 21:22:30 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);

int		index_where_is_x(char *number, char **data_of_nums);

void	print_power_of_thousand(char **data_of_dict,
			int length, char **data_of_nums);

void	print_power_of_thousand_with_input(char **data_of_dict,
			char *input, char **data_of_nums);

void	make_for_multiple_of_10(char *input,
			char **data_of_dict, int *nextindex, char **data_of_nums);

void	make_for_multiple_of_100(char *input,
			char **data_of_dict, char **data_of_nums);

void	make_for_multiple_of_1(char *input,
			char **data_of_dict, char **data_of_nums);

void	print_number_in_letter(char **data_of_dict,
			char **data_of_nums, char *input, int is_first);

void	get_data_from_string_p2(char *fulldic, int *j, int *indexof_2_dots);

char	**get_data_from_string(char *fulldic, int count_new_lines);

void	get_vals_from_strings_p2(int *index_of_start,
			char *fulldic, int *indexof_2_dots, int *j);

void	get_vals_from_strings_p3(char *fulldic, int *j, int *i);

char	**get_vals_from_string(char *fulldic, int count_new_lines);

char	*read_dict(int argc, char **argv)
{
	int		open_thing;
	char	*str_of_dict;
	char	single_char_of_dict;
	ssize_t	bytes_read;
	int		i;

	str_of_dict = malloc(1000 * sizeof(char));
	if (argc == 3)
	{
		open_thing = open(argv[2], O_RDONLY);
	}
	else
		open_thing = open("numbers.dict", O_RDONLY);
	i = 0;
	bytes_read = read(open_thing, &single_char_of_dict, 1);
	while (bytes_read > 0)
	{
		str_of_dict[i] = single_char_of_dict;
		bytes_read = read(open_thing, &single_char_of_dict, 1);
		i++;
	}
	str_of_dict[i] = '\0';
	close(open_thing);
	return (str_of_dict);
}

int	get_count_new_lines(char *str_of_dict)
{
	int	i;
	int	count_new_lines;

	count_new_lines = 0;
	i = 0;
	while (str_of_dict[i] != '\0')
	{
		if (str_of_dict[i] == '\n')
			count_new_lines++;
		i++;
	}
	return (count_new_lines);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	do_the_stuff(char **argv, char	**data_of_dict, char **data_of_nums)
{
	if (ft_strlen(argv[1]) >= 11)
		return (-1);
	if (ft_str_is_numeric(argv[1]) == 0)
		return (-1);
	if (ft_strlen(argv[1]) == 10 && (argv[1][0] > '4' || argv[1][1] > '2'
		|| argv[1][3] > '4' || argv[1][5] > '6' || argv[1][6] > '7' ||
			argv[1][7] > '2' || argv[1][9] > '5'))
		return (-1);
	if (argv[1][0] == '0' && argv[1][1] == '\0')
		write(1, "zero", 4);
	if (argv[1][0] != '0' && argv[1][1] != '\0')
		print_number_in_letter(data_of_dict, data_of_nums, argv[1], 1);
	return (0);
}

int	main(int argc, char **argv)
{
	char	**data_of_dict;
	char	**data_of_nums;
	char	*str_of_dict;
	int		count_new_lines;
	int		i;

	str_of_dict = read_dict(argc, argv);
	count_new_lines = get_count_new_lines(str_of_dict);
	data_of_dict = get_data_from_string(str_of_dict, count_new_lines);
	data_of_nums = get_vals_from_string(str_of_dict, count_new_lines);
	if (argc == 2 || argc == 3)
		if (do_the_stuff(argv, data_of_dict, data_of_nums) == -1)
			write (1, "Error", 5);
	if (argc != 2 && argc != 3)
		write(1, "not enough or too many arguements", 33);
	i = 0;
	while (i != count_new_lines)
	{
		free(data_of_dict[i]);
		free(data_of_nums[i]);
		i++;
	}
	free(data_of_nums);
	free(data_of_dict);
	free(str_of_dict);
}
