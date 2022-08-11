/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_processing_p2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:53:16 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/24 15:05:27 by sboulain         ###   ########.fr       */
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

void	make_for_multiple_of_10(char *input,
			char **data_of_dict, int *nextindex, char **data_of_nums);

void	print_power_of_thousand(char **data_of_dict,
			int length, char **data_of_nums);

void	make_for_multiple_of_100(char *input,
	char **data_of_dict, char **data_of_nums)
{
	char	*number;

	number = malloc(2 * sizeof(char));
	number[0] = input[0];
	number[1] = '\0';
	write(1, data_of_dict[index_where_is_x(number, data_of_nums)],
		ft_strlen(data_of_dict[index_where_is_x(number, data_of_nums)]));
	free(number);
	write(1, " ", 1);
	number = malloc(4 * sizeof(char));
	number[0] = '1';
	number[1] = '0';
	number[2] = '0';
	number[3] = '\0';
	write(1, data_of_dict[index_where_is_x(number, data_of_nums)],
		ft_strlen(data_of_dict[index_where_is_x(number, data_of_nums)]));
	free(number);
}

void	make_for_multiple_of_1(char *input,
	char **data_of_dict, char **data_of_nums)
{
	char	*number;

	number = malloc(2 * sizeof(char));
	number[0] = input[0];
	number[1] = '\0';
	write(1, data_of_dict[index_where_is_x(number, data_of_nums)],
		ft_strlen(data_of_dict[index_where_is_x(number, data_of_nums)]));
	free(number);
}

void	print_number_in_letter(char **data_of_dict,
	char **data_of_nums, char *input, int is_first)
{
	int	length;
	int	nextindex;

	nextindex = 1;
	if (input[0] != '\0')
	{
		if (is_first != 1 && input[0] != '0')
			write (1, " ", 1);
		length = ft_strlen(input);
		if (length % 3 == 2 && input[0] != '0')
			make_for_multiple_of_10(input, data_of_dict,
				&nextindex, data_of_nums);
		if (length % 3 == 0 && input[0] != '0')
			make_for_multiple_of_100(input, data_of_dict, data_of_nums);
		if (length % 3 == 1 && input[0] != '0')
			make_for_multiple_of_1(input, data_of_dict, data_of_nums);
		print_power_of_thousand(data_of_dict, length, data_of_nums);
		print_number_in_letter(data_of_dict, data_of_nums,
			&input[nextindex], 0);
	}
}
