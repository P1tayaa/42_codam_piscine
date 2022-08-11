/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:41:26 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/11 18:11:03 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// int 	main(void)
// {
// 	char	string[] = "la vie est super 254625 non?";
// 	puts (ft_strupcase(string));
// 	return (0);
// }
