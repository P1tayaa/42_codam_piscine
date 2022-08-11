/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dictionary.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:06:25 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/24 15:07:18 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void	get_data_from_string_p2(char *fulldic, int *j, int *indexof_2_dots)
{
	while (fulldic[*j] != '\n' && fulldic[*j] != '\0')
	{
		if (fulldic[*j] == ':')
			*indexof_2_dots = *j + 2;
		*j = *j + 1;
	}
}

char	**get_data_from_string(char *fulldic, int count_new_lines)
{
	int		i;
	int		j;
	char	**data_of_dict;
	int		indexof_2_dots;

	data_of_dict = malloc((count_new_lines + 1) * sizeof(char *));
	i = 0;
	j = 0;
	while (fulldic[j] != '\0')
	{
		get_data_from_string_p2(fulldic, &j, &indexof_2_dots);
		data_of_dict[i] = malloc((j - indexof_2_dots) * sizeof(char));
		j = indexof_2_dots;
		while (fulldic[j] != '\n' && fulldic[j] != '\0')
		{
			data_of_dict[i][j - indexof_2_dots] = fulldic[j];
			j++;
		}
		data_of_dict[i][j - indexof_2_dots] = '\0';
		j++;
		i++;
	}
	return (data_of_dict);
}

void	get_vals_from_strings_p2(int *index_of_start,
	char *fulldic, int *indexof_2_dots, int *j)
{
	*index_of_start = *j;
	while (fulldic[*j] != '\n' && fulldic[*j] != '\0')
	{
		if (fulldic[*j] == ':')
			*indexof_2_dots = *j;
		*j = *j + 1;
	}
}

void	get_vals_from_strings_p3(char *fulldic, int *j, int *i)
{
	while (fulldic[*j] != '\n' && fulldic[*j] != '\0')
		*j = *j + 1;
	*j = *j + 1;
	*i = *i + 1;
}

char	**get_vals_from_string(char *fulldic, int count_new_lines)
{
	int		i;
	int		j;
	char	**data_of_nums;
	int		indexof_2_dots;
	int		index_of_start;

	data_of_nums = malloc((count_new_lines + 1) * sizeof(char *));
	i = 0;
	j = 0;
	while (fulldic[j] != '\0')
	{
		get_vals_from_strings_p2(&index_of_start, fulldic, &indexof_2_dots, &j);
		data_of_nums[i] = malloc(
				(indexof_2_dots - index_of_start + 1) * sizeof(char));
		j = index_of_start;
		while (j < indexof_2_dots)
		{
			data_of_nums[i][j - index_of_start] = fulldic[j];
			j++;
		}
		data_of_nums[i][j - index_of_start] = '\0';
		get_vals_from_strings_p3(fulldic, &j, &i);
	}
	return (data_of_nums);
}
