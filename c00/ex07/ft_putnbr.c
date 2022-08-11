/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:27:39 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/11 17:38:43 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_backwords(char *number)
{
	int	i;

	i = 12;
	while (i >= 0)
	{
		if (number[i] != number[11])
		{
			write(1, &number[i], 1);
		}
		i--;
	}
}

void logic_to_understand_number(int nb, int i, int digit, char	number[13])
{
if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb == 0)
		write(1, "0", 1);
	i = 0;
	while (i < 11)
	{	
		digit = nb % (10);
		nb = nb / 10;
		if (!(nb == 0 && digit == 0))
		{
			number[i] = digit + '0';
		}
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	number[13];
	int		i;
	int		digit;

	if (nb == -2147483647)
		write (1, "-2147483647", 11);
	else
	{
		logic_to_understand_number(nb, i, digit, number);
		print_backwords(number);
	}
}

int	main(void)
{
	ft_putnbr (0);
	return (0);
}
