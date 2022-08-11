/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 22:20:52 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/18 19:46:29 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// int main() {
// 	char str1[] = "Toa";
// 	char str2[] = "Toam!";
// 	int result = strcmp(str1, str2);
// 	printf(" %d ",result);

// 	printf("\n");
// 	result = ft_strcmp(str1, str2);
// 	printf(" %d ",result);

// 	return 0;
// }
