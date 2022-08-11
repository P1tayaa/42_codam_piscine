/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:09:54 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/17 18:46:54 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	recursive_write_function(int nb)
{
	int		digit;
	char	digitchar;

	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb != 0)
	{
		digit = nb % 10;
		nb = nb / 10;
		recursive_write_function (nb);
		digitchar = digit + '0';
		write(1, &digitchar, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
		recursive_write_function(nb);
}

// int	main(void)
// {
// 	ft_putnbr(-84639);
// 	return (0);
// }
