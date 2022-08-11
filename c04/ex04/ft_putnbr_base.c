/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:27:36 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/18 19:45:43 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	int_to_hexa(int nbr)
{
	int		mod;
	int		div;
	int		i;
	char	printchar;

	i = 0;
	if (nbr < 0 && nbr != -2147483648)
	{
		write (1, "-", 1);
		nbr = -nbr;
	}
	mod = nbr % 16;
	div = nbr / 16;
	if (div != 0)
		int_to_hexa(div);
	if (mod < 10)
	{
		printchar = '0' + mod;
		write (1, &printchar, 1);
	}
	else
	{
		printchar = (nbr - 10 + 'A');
		write (1, &printchar, 1);
	}
}

void	int_to_binary(int nbr)
{
	int		mod;
	int		div;
	int		i;
	char	printchar;

	i = 0;
	if (nbr < 0 && nbr != -2147483648)
	{
		write (1, "-", 1);
		nbr = -nbr;
	}
	mod = nbr % 2;
	div = nbr / 2;
	if (div != 0)
		int_to_binary(div);
	if (mod < 10)
	{
		printchar = '0' + mod;
		write (1, &printchar, 1);
	}
	else
	{
		printchar = (nbr - 10 + 'A');
		write (1, &printchar, 1);
	}
}

void	int_to_common(int nbr)
{
	int		mod;
	int		div;
	int		i;
	char	printchar;

	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		i = 0;
		if (nbr < 0 && nbr != -2147483648)
		{
			write (1, "-", 1);
			nbr = -nbr;
		}
		mod = nbr % 10;
		div = nbr / 10;
		if (div != 0)
			int_to_common(div);
		if (mod < 10)
		{
			printchar = '0' + mod;
			write (1, &printchar, 1);
		}
	}
}

void	int_to_poneyvif(int nbr)
{
	int		mod;
	int		div;
	int		i;
	char	printchar;

	i = 0;
	if (nbr < 0 && nbr != -2147483648)
	{
		write (1, "-", 1);
		nbr = -nbr;
	}
	mod = nbr % 8;
	div = nbr / 8;
	if (div != 0)
		int_to_poneyvif(div);
	printchar = '0' + mod;
	write (1, &printchar, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	if (nbr == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		i = 0;
		while (base[i] != '\0')
			i++;
		if (i == 16)
			int_to_hexa(nbr);
		if (i == 2)
			int_to_binary(nbr);
		if (i == 10)
			int_to_common(nbr);
		if (i == 8)
			int_to_poneyvif(nbr);
	}
}

// int main(void)
// {
// 	int		nbr = -2147483648;
// 	char	*binary = "01";
// 	char	*common = "0123456789";
// 	char	*hexadecimal = "0123456789ABCDEF";
// 	char	*poneyvif = "poneyvif";

// 	ft_putnbr_base(nbr, binary);
// 	printf("\n");
// 	ft_putnbr_base(nbr, common);
// 	printf("\n");
// 	ft_putnbr_base(nbr, hexadecimal);
// 	printf("\n");
// 	ft_putnbr_base(nbr, poneyvif);
// 	return (0);
// }
