/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_processing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:51:28 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/24 18:12:46 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

int	index_where_is_x(char *number, char **data_of_nums)
{
	int	i;
	int	j;

	i = 0;
	while (i < 41)
	{
		j = 0;
		while (data_of_nums[i][j] == number[j])
		{
			if (data_of_nums[i][j + 1] == '\0' && number[j + 1] == '\0')
				return (i);
			j++;
		}
		i++;
	}
	return (0);
}

void	print_power_of_thousand(char **data_of_dict,
	int length, char **data_of_nums)
{
	int		i;
	char	*number;

	number = malloc(length * sizeof(char));
	number[0] = '1';
	i = 1;
	while (i < length)
	{
		number[i] = '0';
		i++;
	}
	number[i] = '\0';
	if (length > 3 && length % 3 == 1)
	{
		write(1, " ", 1);
		write(1, data_of_dict[index_where_is_x(number, data_of_nums)],
			ft_strlen(data_of_dict
			[index_where_is_x(number, data_of_nums)]));
	}
	free(number);
}

void	print_power_of_thousand_with_input(char **data_of_dict,
	char *input, char **data_of_nums)
{
	int		length;
	int		i;
	char	*number;

	length = ft_strlen(input);
	length--;
	number = malloc(length * sizeof(char));
	number[0] = '1';
	i = 1;
	while (i < length)
	{
		number[i] = '0';
		i++;
	}
	number[i] = '\0';
	if (length > 3 && length % 3 == 1)
	{
		write(1, " ", 1);
		write(1, data_of_dict[index_where_is_x(number, data_of_nums)],
			ft_strlen(data_of_dict[index_where_is_x(number, data_of_nums)]));
	}
	free(number);
}

void	make_for_multiple_of_10(char *input,
	char **data_of_dict, int *nextindex, char **data_of_nums)
{
	char	*number;

	number = malloc(3 * sizeof(char));
	if (input[0] - '0' != 1)
	{
		number[0] = input[0];
		number[1] = '0';
		number[2] = '\0';
		write(1, data_of_dict[index_where_is_x(number, data_of_nums)],
			ft_strlen(data_of_dict[index_where_is_x(number, data_of_nums)]));
	}
	if (input[0] - '0' == 1)
	{
		number[0] = input[0];
		number[1] = input[1];
		number[2] = '\0';
		write(1, data_of_dict[index_where_is_x(number, data_of_nums)],
			ft_strlen(data_of_dict[index_where_is_x(number, data_of_nums)]));
		print_power_of_thousand_with_input(data_of_dict, input, data_of_nums);
		*nextindex = *nextindex + 1;
	}
	free(number);
}
