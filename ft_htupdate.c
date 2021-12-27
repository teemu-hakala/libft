/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htupdate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 22:30:57 by thakala           #+#    #+#             */
/*   Updated: 2021/12/26 13:45:22 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_htupdate(t_ht *ht, ssize_t seed, void *content)
{
	t_list	*head;
	t_list	*iterator;
	t_list	*addition;

	head = ht->t[ft_hthash(seed, ht->size)];
	if (head)
	{
		iterator = head;
		while (iterator)
		{
			if (iterator->content_size == seed)
			{
				iterator->content = content;
				return (iterator->content);
			}
			iterator = iterator->next;
		}
	}
	addition = ft_lstnew(content, seed);
	if (!addition)
		return (NULL);
	ft_lstadd(&head, addition);
	return (addition->content);
}
