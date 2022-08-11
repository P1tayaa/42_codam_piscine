/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:36:31 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/27 14:27:02 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	find_size_of_final_str(int size, char **strs, char *sep)
{
	int		size_of_final_str;
	int		i;
	int		j;

	size_of_final_str = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			size_of_final_str++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	size_of_final_str = size_of_final_str + (size * i);
	return (size_of_final_str);
}

void	mk_final_str(int size, char *final_str, char **strs, char *sep)
{
	int	i;
	int	j;
	int	current_size_of_final_str;

	i = 0;
	current_size_of_final_str = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			final_str[current_size_of_final_str] = strs[i][j];
			j++;
			current_size_of_final_str++;
		}
		j = 0;
		while (sep[j] != '\0' && i != size -1)
		{
			final_str[current_size_of_final_str] = sep[j];
			j++;
			current_size_of_final_str++;
		}
		i++;
	}
	final_str[current_size_of_final_str] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		size_of_final_str;
	char	*final_str;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	size_of_final_str = find_size_of_final_str(size, strs, sep);
	final_str = malloc(size_of_final_str * sizeof(char));
	mk_final_str(size, final_str, strs, sep);
	return (final_str);
}

// int main(void)
// {
// 	int		size = 5;
// 	char	**strs;
// 	char	*sep;
// 	strs = malloc(size * sizeof(char *));
// 	strs[0] = "mon";
// 	strs[1] = "cul";
// 	strs[2] = "ca";
// 	strs[3] = "marche";
// 	strs[4] = "ce truc";
// 	sep = ", ";
// 	int i = 0;
// 	char	*final = ft_strjoin(size, strs, sep);
// 	while (final[i] != '\0')
// 	{
// 		write(1, &final[i], 1);
// 		i++;
// 	}
// }
