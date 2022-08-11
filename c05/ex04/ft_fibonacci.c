/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:51:22 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/13 12:12:13 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
	{
		return (index);
	}
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

// int	main(void)
// {
// 	int index = 4;

// 	printf("%d", ft_fibonacci(index));
// }
