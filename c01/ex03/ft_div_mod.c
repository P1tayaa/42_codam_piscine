/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:17:53 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/11 15:45:13 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int div; 
// 	int mod;

// 	div = 0;
// 	mod = 0;
// 	ft_div_mod(11, 10, &div, &mod);
// 	printf("div is %d, mod is %d", div, mod);
// }
