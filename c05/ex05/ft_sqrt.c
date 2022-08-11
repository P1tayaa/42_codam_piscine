/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:12:00 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/27 14:06:42 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	number;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb > 2147395601)
		return (0);
	number = 2;
	while (nb >= number * number)
	{
		if (nb / number == number && nb % number == 0)
			return (number);
		number++;
	}
	return (0);
}

// int main(void)
// {
// 	int number = 2147483647;
// 	printf("%d", ft_sqrt(number));
// }
