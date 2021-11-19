/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:44:35 by thakala           #+#    #+#             */
/*   Updated: 2021/11/19 15:41:32 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*block;

	block = (char *)malloc(sizeof(char) * size);
	if (!block)
		return (block);
	ft_bzero(block, size);
	return (block);
}
