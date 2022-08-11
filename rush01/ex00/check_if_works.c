/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_works.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:11:21 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/17 17:37:27 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	check_for_top(int **table_content, int i)
{
	int	j;
	int	counter;
	int	biggest;

	counter = 1;
	j = 0;
	biggest = table_content[j][i % 4];
	while (j < 4)
	{
		if (biggest < table_content[j][i])
		{
			biggest = table_content[j][i];
			counter++;
		}
		j++;
	}
	return (counter);
}

int	check_for_bottom(int **table_content, int i)
{
	int	j;
	int	counter;
	int	biggest;

	counter = 1;
	j = 3;
	biggest = table_content[j][i % 4];
	while (j >= 0)
	{
		if (biggest < table_content[j][i % 4])
		{
			biggest = table_content[j][i % 4];
			counter++;
		}
		j--;
	}
	return (counter);
}

int	check_for_left(int **table_content, int i)
{
	int	j;
	int	counter;
	int	biggest;

	counter = 1;
	j = 0;
	biggest = table_content[i % 4][j];
	while (j < 4)
	{
		if (biggest < table_content[i % 4][j])
		{
			biggest = table_content[i % 4][j];
			counter++;
		}
		j++;
	}
	return (counter);
}

int	check_for_right(int **table_content, int i)
{
	int	j;
	int	counter;
	int	biggest;

	counter = 1;
	j = 3;
	biggest = table_content[i % 4][j];
	while (j >= 0)
	{
		if (biggest < table_content[i % 4][j])
		{
			biggest = table_content[i % 4][j];
			counter++;
		}
		j--;
	}
	return (counter);
}

int	check_for_all_input(int	**table_content, int *array_of_num_input)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i / 4 == 0)
			if (check_for_top(table_content, i) != array_of_num_input[i])
				return (0);
		if (i / 4 == 1)
			if (check_for_bottom(table_content, i) != array_of_num_input[i])
				return (0);
		if (i / 4 == 2)
			if (check_for_left(table_content, i) != array_of_num_input[i])
				return (0);
		if (i / 4 == 3)
			if (check_for_right(table_content, i) != array_of_num_input[i])
				return (0);
		i++;
	}
	return (1);
}
