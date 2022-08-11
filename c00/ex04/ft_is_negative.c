/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:11:51 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/11 14:59:52 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	temp;

	if (n >= 0)
	{
		temp = 'P';
		write(1, &temp, 1);
	}
	else
	{
		temp = 'N';
		write(1, &temp, 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative (0);
// 	return (0);
// }
