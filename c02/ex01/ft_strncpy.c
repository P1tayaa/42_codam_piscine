/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:31:11 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/15 11:13:57 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <strings.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	example [50];
// 	char	example1 [50];
// 	strncpy(example1, "42 is the best, even thaugh it a french school", 15);
// 	ft_strncpy (example, "42 is the best, even thaugh it a french school", 15);
// 	puts (example1);
// 	puts (example);
// 	return (0);
// }
