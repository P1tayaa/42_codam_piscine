/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:43:33 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/11 17:57:38 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	tempint;

	i = 0;
	while (i < size)
	{
		j = i;
		temp = i;
		while (j < size)
		{
			if (tab[temp] > tab[j])
			{
				temp = j;
			}
			j++;
		}
		tempint = tab[i];
		tab[i] = tab[temp];
		tab[temp] = tempint;
		i++;
	}
}

// int	main(void)
// {
// 	int	size;
// 	int	i;
// 	int	tab[10] = {1, 3, 5, 48, 56, 0, -45, 42, 9, 900};

// 	size = 10;
// 	i = 0;
// 	ft_sort_int_tab(tab, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf(" %d ", (tab[i]));
// 		i++;
// 	}
// 	return (0);
// }
