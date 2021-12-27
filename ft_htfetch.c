/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htfetch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 12:33:17 by thakala           #+#    #+#             */
/*   Updated: 2021/12/26 13:45:11 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_htfetch(t_ht *ht, ssize_t seed)
{
	t_list	*iterator;

	iterator = ht->t[ft_hthash(seed, ht->size)];
	while (iterator)
	{
		if (iterator->content_size == seed)
			return (iterator->content);
		iterator = iterator->next;
	}
	return (NULL);
}
