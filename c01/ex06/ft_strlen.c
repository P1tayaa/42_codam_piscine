/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:06:10 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/08 14:16:42 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		write(1, &str[lenght], 1);
		lenght++;
	}
	lenght++;
	return (lenght);
}

// int	main(void)
// {
// 	char	*truc;

// 	truc = "monCulCULCULCUL";
// 	ft_strlen(truc);
// 	return (0);
// }
