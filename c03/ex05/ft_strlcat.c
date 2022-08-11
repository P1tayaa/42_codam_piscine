/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:14:15 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/21 14:58:59 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h> 

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	lenght++;
	return (lenght);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;
	unsigned int	tempi;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	tempi = i;
	if (size == 0 || size <= tempi)
		return (ft_strlen(src) + size - 1);
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (tempi + ft_strlen(src) - 1);
}

// int main(void)
// {
// 	char dst[100] = "1234";
// 	char src[100] = "ABCD";
// 	char dst2[100] = "1234";

// 	printf(" %lu ",strlcat(dst, src, 0));
// 	puts(dst);

// 	printf(" %u ",ft_strlcat(dst2, src, 0));
// 	puts(dst2);
// }