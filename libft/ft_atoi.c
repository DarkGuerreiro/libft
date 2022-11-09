/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:53:04 by arosa-de          #+#    #+#             */
/*   Updated: 2022/07/24 17:53:08 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	count;
	int	index;
	int	result;

	count = 0;
	index = 1;
	result = 0;
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == 32)
		count++;
	while (str[count] == 43 || str[count] == 45)
	{
		if (str[count] == 45)
			index *= -1;
		count++;
	}
	while (str[count] >= 48 && str[count] <= 57)
	{
		result = (str[count] - 48) + (result * 10);
		count++;
	}
	return (result * index);
}
