/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:03:21 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/26 17:44:07 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array_of_ints;
	int	i;

	array_of_ints = malloc((max - min) * sizeof(int));
	i = 0;
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		array_of_ints[i] = min;
		min++;
		i++;
	}
	return (array_of_ints);
}

// int main(void)
// {
// 	int min = 5;
// 	int max = 56;
// 	int	*array_of_ints = ft_range(min, max);
// 	int i;

// 	i = 0;
// 	while(i < (max - min))
// 	{
// 		printf(" %d ", array_of_ints[i]);
// 		i++;
// 	}
// }
