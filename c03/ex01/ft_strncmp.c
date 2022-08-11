/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 22:20:49 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/18 19:47:23 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// int main() {
// 	char str1[] = "Tom!113";
// 	char str2[] = "Tom!112";
// 	int num;
// 	int result;
// 	num = 6;

// 	result = strncmp(str1, str2, num);
// 	if (result==0)
// 	{
// 		printf("Strings are equal");
// 	}
// 	else
// 	{
// 		printf("Strings are unequal");
// 	}
// 	printf("\n");
// 	result = ft_strncmp(str1, str2, num);
// 	if (result==0)
// 	{
// 		printf("Strings are equal");
// 	}
// 	else
// 	{
// 		printf("Strings are unequal");
// 	}
// 	return 0;
// }
