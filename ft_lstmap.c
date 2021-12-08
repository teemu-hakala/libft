/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:35:44 by thakala           #+#    #+#             */
/*   Updated: 2021/12/07 14:57:14 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_lstadd_back(t_list **current, t_list *additional)
{
	(*current)->next = additional;
	*current = additional;
}

static void	ft_erase_node(void *content, size_t content_size)
{
	ft_bzero(content, content_size);
	free(content);
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*current;
	t_list	*additional;

	current = f(lst);
	if (!current)
		return (NULL);
	head = current;
	lst = lst->next;
	while (lst)
	{
		additional = f(lst);
		if (!additional)
		{
			ft_lstdel(&head, ft_erase_node);
			return (NULL);
		}
		ft_lstadd_back(&current, additional);
		lst = lst->next;
	}
	return (head);
}
