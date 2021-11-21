/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:35:44 by thakala           #+#    #+#             */
/*   Updated: 2021/11/21 14:50:31 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_lstadd_back(t_list **alst, t_list *new)
{
	(*alst)->next = new;
	*alst = new;
}

static void	ft_erase_node(void *content, size_t content_size)
{
	ft_bzero(content, content_size);
	free(content);
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_beginning;
	t_list	*new;
	t_list	*additional;

	new = ft_lstnew(f(lst)->content, lst->content_size);
	if (!new)
		return (NULL);
	new_beginning = new;
	lst = lst->next;
	while (lst)
	{
		additional = ft_lstnew(f(lst)->content, lst->content_size);
		if (!additional)
		{
			ft_lstdel(&new_beginning, ft_erase_node);
			return (NULL);
		}
		ft_lstadd_back(&new, additional);
		lst = lst->next;
	}
	return (new_beginning);
}
