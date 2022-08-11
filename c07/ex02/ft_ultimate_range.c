/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:02:59 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/27 14:18:08 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include <stdio.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	*range = malloc((max - min + 1) * sizeof(int));
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	int	min = 0;
// 	int	max = 166;
// 	int	*array_of_ints;
// 	int	size = ft_ultimate_range(&array_of_ints, min, max);
// 	int	i;

// 	i = 0;
// 	while (i < (max - min))
// 	{
// 		printf(" %d ", size);
// 		printf(" %d ", array_of_ints[i]);
// 		i++;
// 	}
// }
