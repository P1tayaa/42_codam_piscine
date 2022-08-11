/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:19:44 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/27 14:05:17 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	number;

	number = nb;
	if (nb < 0)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb == 1)
		return (0);
	while (nb > 0)
	{
		if (!(nb == number || nb == 1))
			if (number % nb == 0)
				return (0);
		nb = nb - 2;
	}
	return (1);
}

// int main(void)
// {
// 	int nb = 19;
// 	printf("%d", ft_is_prime(nb));
// }
