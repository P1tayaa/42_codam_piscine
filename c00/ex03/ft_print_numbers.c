/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:09:02 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/11 14:59:29 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	temp_lettre;

	i = 0;
	while (i < 10)
	{
		temp_lettre = '0' + i ;
		write(1, &temp_lettre, 1);
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
