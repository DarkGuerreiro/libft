/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:11:41 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:26:26 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compares  the  two  strings  s1 and s2
//The locale is not taken into account 
//(for a locale-aware comparison, see strcoll(3))
//It returns an integer less than, equal to, 
//or greater than zero if s1 is found, respectively, 
//to be less than, to match, or be greater than s2
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (n--)
	{
		if (*c1 != *c2 || *c1 == '\0' || *c2 == '\0')
			return (*c1 - *c2);
		c1++;
		c2++;
	}
	return (0);
}
