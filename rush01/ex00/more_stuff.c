/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_stuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:44:32 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/17 17:46:43 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	**make_array(void)
{
	int	**array_1;
	int	i;
	int	j;

	array_1 = (int **) malloc (4 * sizeof (int *));
	i = 0;
	while (i < 4)
	{
		array_1[i] = (int *) malloc (4 * sizeof(int));
		i++;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			array_1[i][j] = 0;
			j++;
		}
		i++;
	}
	return (array_1);
}

int	allcombination_ft_p2(int i, int j,
	int length, int **an_array_allcombination)
{
	int	k;
	int	l;

	k = 1;
	while (k < 5)
	{
		l = 1;
		while (l < 5)
		{
			if (i != j && i != k && i != l
				&& j != k && j != l && k != l)
			{
				an_array_allcombination[length][0] = i;
				an_array_allcombination[length][1] = j;
				an_array_allcombination[length][2] = k;
				an_array_allcombination[length][3] = l;
				length++;
			}
			l++;
		}
		k++;
	}
	return (length);
}

int	**allcombination_ft(void)
{
	int	**allcombination;
	int	i;
	int	j;
	int	length;

	allcombination = (int **) malloc (24 * sizeof(int *));
	i = 0;
	while (i < 24)
	{
		allcombination[i] = (int *) malloc (4 * sizeof(int));
		i++;
	}
	length = 0;
	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			length = allcombination_ft_p2(i, j, length, allcombination);
			j++;
		}
		i++;
	}
	return (allcombination);
}

int	*get_value(char *str)
{
	int	i;
	int	j;
	int	*array_of_num_input;

	array_of_num_input = malloc(16 * sizeof(int));
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			array_of_num_input[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (array_of_num_input);
}

int	is_input_too_long(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		if (i % 2 == 1)
			if (input[i] != ' ')
				return (0);
		if (i % 2 == 0)
			if (input[i] < '0' || input[i] > '9')
				return (0);
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}
