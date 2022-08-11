/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:53:45 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/09 22:05:21 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	magic_print_char(int j, int i, int x, int y)
{
	if ((i == y - 1 && j == x - 1) || (i == 0 && j == 0)
		|| (i == y - 1 && j == 0) || (i == 0 && j == x - 1))
	{
		ft_putchar ('o');
	}
	else if (j == x - 1 || j == 0)
	{
		ft_putchar ('|');
	}
	else if (i == y - 1 || i == 0)
	{
		ft_putchar ('-');
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
