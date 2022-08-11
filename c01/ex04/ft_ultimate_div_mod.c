/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:22:11 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/11 15:48:00 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main(void)
// {
// 	int a; 
// 	int b;

// 	a = 11;
// 	b = 10;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("a is %d, b is %d", a, b);
// }
