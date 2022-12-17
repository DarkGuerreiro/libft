/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:53:04 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 01:04:01 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convert a string to a integer
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	index;
	int	result;

	count = 0;
	index = 1;
	result = 0;
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == 32)
		count++;
	if (str[count] == 45)
	{
		index *= -1;
		count++;
	}
	else if (str[count] == 43)
		count++;
	while (str[count] >= 48 && str[count] <= 57)
	{
		result = (str[count] - 48) + (result * 10);
		count++;
	}
	return (result * index);
}
