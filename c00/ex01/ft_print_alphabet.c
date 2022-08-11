/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:52:50 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/07 18:17:17 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		i;
	char	temp_lettre;

	i = 0;
	while (i < 26)
	{	
		temp_lettre = 'a' + i ;
		write(1, &temp_lettre, 1);
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
