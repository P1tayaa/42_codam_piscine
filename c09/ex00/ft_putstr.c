/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:48:57 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/11 17:57:25 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		write(1, &str[lenght], 1);
		lenght++;
	}
}

// int	main(void)
// {
// 	char	*truc;

// 	truc = "monCulCULCULCUL";
// 	ft_putstr(truc);
// }
