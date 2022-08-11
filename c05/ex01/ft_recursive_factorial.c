/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:03:54 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/27 14:02:18 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	int	tempnb;

	tempnb = nb;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb != 0)
	{	
		if (nb < 0)
			nb++;
		if (nb > 0)
			nb--;
		nb = ft_recursive_factorial(nb);
	}
	return (tempnb * nb);
}

// int	main(void)
// {
// 	int nb = 6;

// 	nb = ft_recursive_factorial(0);
// 	printf("%d", nb);
// }
