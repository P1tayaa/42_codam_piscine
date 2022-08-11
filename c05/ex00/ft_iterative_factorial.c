/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:53:35 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/19 17:38:39 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		factorial = factorial * nb;
		if (nb < 0)
			nb++;
		if (nb > 0)
			nb--;
	}
	return (factorial);
}

// int	main(void)
// {
// 	int	nb = -5;

// 	nb = ft_iterative_factorial(5);
// 	printf("%d", nb);
// }
