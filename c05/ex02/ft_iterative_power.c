/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:16:25 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/27 14:03:09 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	multiplier;

	multiplier = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb == 0)
		return (0);
	while (power != 1)
	{
		nb = nb * multiplier;
		power--;
	}
	return (nb);
}

// int	main(void)
// {
// 	int nb = 0;
// 	int power = -4;

// 	printf("%d", ft_iterative_power(nb, power));
// }
