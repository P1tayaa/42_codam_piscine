/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:26:27 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/11 16:59:41 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	write_pair_of_numbers(char a1, char a2, char b1, char b2)
{
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (!(a1 == '9' && a2 == '8' && b1 == '9' && b2 == '9'))
	{
		write(1, ", ", 2);
	}
}

void	start_loops(char a1, char a2, char b1, char b2)
{
	while (a1 < 58)
	{
		a2 = '0';
		while (a2 < 58)
		{
			b1 = a1;
			while (b1 < 58)
			{
				b2 = a2 + 1;
				while (b2 < 58)
				{
					write_pair_of_numbers(a1, a2, b1, b2);
					b2++;
				}
				b2 = '0';
				b1++;
			}
			a2++;
		}
		a1++;
	}
}

void	ft_print_comb2(void)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = '0';
	a2 = '0';
	b1 = '0';
	b2 = '0';
	start_loops(a1, a2, b1, b2);
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
