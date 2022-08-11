/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:21:05 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/14 20:30:21 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main()
// {
// 	char str1[20] = "C programming";
// 	char str2[20];
// 	char str3[20] = "C programming";
// 	char str4[20];

// 	strcpy(str4, str3);
// 	puts(str4);
// 	ft_strcpy(str2, str1);
// 	puts(str2);
// 	return (0);
// }
