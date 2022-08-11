/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:15:31 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/26 15:21:13 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

void	ft_swap(char **a, char **b)
{
	char	*temp_val;

	temp_val = *a;
	*a = *b;
	*b = temp_val;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = i;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_print_str(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
