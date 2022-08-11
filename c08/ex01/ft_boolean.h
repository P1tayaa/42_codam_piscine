/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboulain <sboulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:12:29 by sboulain          #+#    #+#             */
/*   Updated: 2022/07/20 15:30:33 by sboulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

typedef int	t_bool;

# define TRUE 1
# define FALSE 0

t_bool	TRUE, FALSE;

int	EVEN(int nbr)
{
	return (nbr % 2);
}
# define SUCCESS 0
# define ODD_MSG "I have an odd number of arguments."
# define EVEN_MSG "I have an even number of arguments."

#endif
