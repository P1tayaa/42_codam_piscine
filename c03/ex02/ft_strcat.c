/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 12:21:01 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/19 17:08:57 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h> 

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main() {
// 	char src[] = "debut";
// 	char dest[13] = "lalala ";
// 	char dest2[13] = "lalala ";

// 	printf("%s",strcat(dest, src));
// 	printf("\n");
// 	printf("%s", dest);
// 	printf("\n");

// 	printf("%s",ft_strcat(dest2, src));
// 	printf("\n");
// 	printf("%s", dest2);

// 	return 0;
// }
