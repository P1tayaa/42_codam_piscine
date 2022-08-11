/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:07:09 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/18 19:39:35 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	get_list_of_digit(char *str, int i)
{
	int	digit;
	int	number;
	int	power_of_10;
	int	j;

	power_of_10 = 1;
	number = 0;
	j = 0;
	while ((str[i] <= '9' && str[i] >= '0') && str[i] != '\0')
	{
		digit = str[i] - '0';
		if (j > 0)
			number = number * 10;
		number = (number + digit);
		j++;
		i++;
	}
	return (number);
}

int	make_i_right(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	count_negative;
	int	is_negative;
	int	nb;

	is_negative = 0;
	count_negative = 0;
	i = make_i_right(str);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count_negative++;
		i++;
	}
	if (str[i] <= '9' && str[i] >= '0')
	{
		if (count_negative % 2 == 1)
			is_negative = 1;
		nb = get_list_of_digit(str, i);
		if (is_negative == 1)
			nb = -nb;
		return (nb);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", atoi("  \n  -2147483648"));
// 	printf("%d", ft_atoi("  \n -2147483648"));
// 	return (0);
// }
