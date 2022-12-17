/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 05:15:03 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:10:47 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates (with malloc) 
//and returns a string representing the integer received as an argument 
//Negative numbers must be handled
#include "libft.h"

static int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
		len++;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static void	ft_nbrtostr(int n, char *ptr, int len)
{
	ptr[len] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		if (n == -2147483648)
		{
			ptr[1] = '2';
			n = 147483648;
			ptr += 2;
			len -= 2;
		}
		else
		{
			n = -n;
			ptr++;
			len--;
		}
	}
	while (len)
	{
		ptr[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;

	len = ft_nbrlen(n);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_nbrtostr(n, ptr, len);
	return (ptr);
}
