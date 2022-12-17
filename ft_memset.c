/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 07:37:17 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:01:18 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Fill with "len" bytes of "c" the memory of "s"
#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
	{
		*p = (unsigned char)c;
		p++;
	}
	return (s);
}
