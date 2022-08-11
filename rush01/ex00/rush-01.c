/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:08:13 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/17 17:49:58 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	last_value(int line_1, int line_2, int line_3);

int	*get_value(char *str);

int	check_for_top(int **table_content, int i);

int	check_for_bottom(int **table_content, int i);

int	check_for_left(int **table_content, int i);

int	check_for_right(int **table_content, int i);

int	check_for_all_input(int	**table_content, int *array_of_num_input);

int	**make_array(void);

int	allcombination_ft_p2(int i, int j,
		int length, int **allcombination);

int	**allcombination_ft(void);

int	undup2(int **table_content,
		int	**allcombination, int *j);

int	no_dup_row_3(int **table_content,
		int	**allcombination, int k);

int	**make_row_4(int **table_content);

int	is_input_too_long(char *input);

void	print_table(int **table_content)
{
	char	printing_char;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			printing_char = '0' + table_content[i][j];
			write(1, &printing_char, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}

int	**find_the_right_table_p2(int i, int **table_content,
	int *array_of_num_input, int **allcombi)
{
	int	j;
	int	k;

	while (i < 24)
	{
		table_content[0] = allcombi[i];
		j = 0;
		while (j < 24)
		{
			table_content[1] = allcombi[undup2(table_content, allcombi, &j)];
			k = 0;
			while (k < 24)
			{
				k = no_dup_row_3(table_content, allcombi, k);
				table_content[2] = allcombi[k];
				table_content = make_row_4(table_content);
				if (check_for_all_input(table_content, array_of_num_input) == 1)
					return (table_content);
				k++;
			}
			j++;
		}
		i++;
	}
	return (table_content);
}

int	**find_the_right_table(int **table_content, int	*array_of_num_input)
{
	int	**allcombination;
	int	i;

	allcombination
		= allcombination_ft();
	i = 0;
	table_content = find_the_right_table_p2(i,
			table_content, array_of_num_input, allcombination);
	return (table_content);
}

int	is_bad_table(int **table_content)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 3)
		{
			if (table_content[i][0] != 4 || table_content[i][1] != 3
				|| table_content[i][2] != 2)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	*array_of_num_input;
	int	**table_content;

	if (is_input_too_long(argv[1]) == 0)
		write(1, "input string is wrong", 21);
	else if (argc == 2)
	{
		array_of_num_input = get_value(argv[1]);
		table_content = make_array();
		table_content = find_the_right_table
			(table_content, array_of_num_input);
		if (is_bad_table(table_content) == 0)
			print_table(table_content);
		else
			write(1, "no solutions", 12);
	}
	else
		write(1, "not enought or too many arguments", 33);
	return (0);
}
