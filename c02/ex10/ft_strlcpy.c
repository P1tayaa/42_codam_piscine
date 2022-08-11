/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:02:28 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/15 11:19:56 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <libc.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// int main()
// {
//     char string[] = "Hello there, Venus";
//     char buffer[19];
// 	char buffer2[19];
//     int r;
// 	int size = 9;

//     r = strlcpy(buffer,string,size);

//     printf("Copied '%s' into '%s', %d",
//             string,
//             buffer,
// 			r
//           );

// 	r = ft_strlcpy(buffer2,string,size);

//     printf("\nCopied '%s' into '%s', %d",
//             string,
//             buffer2,
// 			r
//           );
//     return(0);
// }
