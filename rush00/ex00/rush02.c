/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:01:58 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/09 17:21:49 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	magic_print_char(int j, int i, int x, int y)
{
	if ((i == 0 && j == x - 1) || (i == 0 && j == 0))
	{
		ft_putchar ('A');
	}
	else if ((i == y - 1 && j == x - 1) || (i == y - 1 && j == 0))
	{
		ft_putchar ('C');
	}
	else if (i == y - 1 || i == 0 || j == x - 1 || j == 0)
	{
		ft_putchar ('B');
	}
	else
	{
		ft_putchar (' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			magic_print_char(j, i, x, y);
			j++;
		}	
		ft_putchar('\n');
		i++;
	}
}
