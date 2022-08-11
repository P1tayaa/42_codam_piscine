/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:43:24 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/21 14:59:39 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h> 

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (str[0] == '\0' && to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j] && str[i + j] != '\0')
				j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *largestring = "";
// 	char *smallstring = "";
// 	char *ptr;

// 	ptr = strstr(largestring, smallstring);
// 	puts(ptr);
// 	ptr = ft_strstr(largestring, smallstring);
// 	puts(ptr);

// }
