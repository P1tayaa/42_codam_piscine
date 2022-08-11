/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:56:44 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/27 18:39:22 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*strcopy;
	int		i;

	i = 0;
	while (src[i] == '\0')
		i++;
	strcopy = malloc(i * sizeof(char));
	if (!strcopy)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		strcopy[i] = src[i];
		i++;
	}
	strcopy[i] = '\0';
	return (strcopy);
}

// int	main(void)
// {
// 	char	*str = "adfaefae";
// 	char	*strcopy;

// 	strcopy = ft_strdup(str);
// 	printf("%s", strcopy);
// 	return (0);
// }
