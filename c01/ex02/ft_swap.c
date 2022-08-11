/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:07:11 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/11 17:59:18 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp_val;

	temp_val = *a;
	*a = *b;
	*b = temp_val;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 3;
// 	b = 5;
// 	ft_swap(&a, &b);
// 	printf("a is %d, b is %d", a, b);

// }
