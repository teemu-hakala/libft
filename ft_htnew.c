/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 22:19:48 by thakala           #+#    #+#             */
/*   Updated: 2021/12/26 13:45:16 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_ht	*ft_htnew(size_t pens)
{
	t_ht	*ht;

	ht = (t_ht *)malloc(sizeof(t_ht));
	if (!ht)
		return (NULL);
	ht->t = (t_list **)ft_memalloc(sizeof(t_list *) * pens);
	if (!ht->t)
	{
		free(ht);
		return (NULL);
	}
	ht->size = pens;
	return (ht);
}
