/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:59:22 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/14 21:45:44 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z'
			&& !((str[i - 1] <= '9' && str[i - 1] >= '0')
				|| (str[i - 1] <= 'z' && str[i - 1] >= 'a')
				|| (str[i - 1] <= 'Z' && str[i - 1] >= 'A')))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	string[] = "la-vie est+sUper 254625non?";
// 	puts (ft_strcapitalize(string));
// 	return (0);
// }
