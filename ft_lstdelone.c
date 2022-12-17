/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:06:45 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:11:16 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Takes as a parameter a node 
//and frees the memory of the node’s content 
//using the function ’del’ given as a parameter and free the node 
//The memory of ’next’ must not be freed
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
