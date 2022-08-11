/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:43:33 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/09 16:18:04 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (1 == 1)
	{
		if (j - i > 1)
		{	
			temp = tab[j];
			tab[j] = tab[i];
			tab[i] = temp;
			j--;
			i++;
		}
		else
		{
			break ;
		}
	}
}

// int	main(void)
// {
// 	int	size;
// 	int	i;
// 	int	tab[10] = {1, 3, 5 , 48 , 56, 0 , -45, 42, 9, 900};

// 	size = 10;
// 	i = 0;
// 	while (i < size)
// 	{
// 		tab[i] = i;
// 		//printf(" %d ", (tab[i]));
// 		i++;
// 	}
// 	ft_rev_int_tab(tab, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf(" %d ", (tab[i]));
// 		i++;
// 	}
// 	return (0);
// }
