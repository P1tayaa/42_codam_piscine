/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_sure_no_dup_row.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 22:53:23 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/16 23:05:00 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	last_value(int line_1, int line_2, int line_3)
{
	int	line_4;

	if (line_1 != 1 && line_2 != 1 && line_3 != 1)
	{
		line_4 = 1;
	}
	else if (line_1 != 2 && line_2 != 2 && line_3 != 2)
	{
		line_4 = 2;
	}
	else if (line_1 != 3 && line_2 != 3 && line_3 != 3)
	{
		line_4 = 3;
	}
	else if (line_1 != 4 && line_2 != 4 && line_3 != 4)
	{
		line_4 = 4;
	}
	else
		line_4 = line_1;
	return (line_4);
}

int	undup2(int **table_content,
	int	**allcombination, int *j)
{
	int	l;

	l = 0;
	while (l < 4 && *j < 24)
	{
		if (table_content[0][l]
			== allcombination[*j][l])
		{
			*j = *j + 1;
			l = 0;
			if (*j > 23)
			{
				*j = 23;
				break ;
			}
		}
		else
			l++;
	}
	return (*j);
}

int	no_dup_row_3(int **table_content,
	int	**allcombination, int k)
{
	int	l;

	l = 0;
	while (l < 4 && k < 24)
	{
		if (table_content[0][l]
			== allcombination[k][l]
				|| table_content[1][l]
					== allcombination[k][l])
		{
			k++;
			l = 0;
			if (k > 23)
			{
				k = 23;
				break ;
			}
		}
		else
			l++;
	}
	return (k);
}

int	**make_row_4(int **table_content)
{
	table_content[3][0] = last_value(table_content[0][0],
			table_content[1][0], table_content[2][0]);
	table_content[3][1] = last_value(table_content[0][1],
			table_content[1][1], table_content[2][1]);
	table_content[3][2] = last_value(table_content[0][2],
			table_content[1][2], table_content[2][2]);
	table_content[3][3] = last_value(table_content[0][3],
			table_content[1][3], table_content[2][3]);
	return (table_content);
}
