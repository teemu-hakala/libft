/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htdel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 16:20:22 by thakala           #+#    #+#             */
/*   Updated: 2021/12/27 13:26:35 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_htdel(t_ht *ht, ssize_t seed, void (*del)(void *c, size_t s))
{
	t_list	*previous;
	t_list	*iterator;
	t_list	*next;

	previous = ht->t[ft_hthash(ht, seed)];
	if (!previous)
		return ;
	iterator = previous;
	while (iterator)
	{
		next = iterator->next;
		if (iterator->content_size == seed)
		{
			previous->next = next;
			return (ft_lstdelone(iterator, del));
		}
		previous = iterator;
		iterator = next;
	}
	return ;
}
