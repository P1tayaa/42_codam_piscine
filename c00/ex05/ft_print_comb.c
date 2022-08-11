/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:15:49 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/11 15:05:50 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	write_a_number(int a, int b, int c)
{
	if (!(a == b || a == c || c == b))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (!(a == '7' && b == '8' && c == '9'))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a < 58)
	{
		b = a + 1;
		while (b < 58)
		{
			c = b + 1;
			while (c < 58)
			{
				write_a_number(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
