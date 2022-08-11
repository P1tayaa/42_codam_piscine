/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 12:21:01 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/19 17:25:08 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h> 

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// int	main() {
// 	char src[] = "added sutff";
// 	char dest[50] = "adwadw ";
// 	char dest2[50] = "adwadw ";

// 	printf("%s",strncat(dest, src, 11));
// 	printf("\n");

// 	printf("%s",ft_strncat(dest2, src, 11));
// 	printf("\n");

// 	return (0);
// }
