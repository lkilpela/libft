/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkilpela <lkilpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:23:10 by lkilpela          #+#    #+#             */
/*   Updated: 2023/11/14 23:29:51 by lkilpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/**
 * t_list *last; declares a pointer to a t_list node.
 * 
 * If the list is empty (*lst == NULL), the new node becomes the 
 * first node of the list.
 * 
 * If the list is not empty, the function uses ft_lstlast to find the last node 
 * of the list, and then sets the next field of the last node to the new node.
 * 
 */