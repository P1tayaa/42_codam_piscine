/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:23:40 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/27 14:03:42 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	int	multiplier;

	multiplier = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power != 1)
	{
		power--;
		nb = multiplier * ft_recursive_power(nb, power);
	}
	return (nb);
}

// int	main(void)
// {
// 	int nb = 0;
// 	int power = 3;

// 	printf("%d", ft_recursive_power(nb, power));
// }
