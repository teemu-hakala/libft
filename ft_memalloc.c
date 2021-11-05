/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:44:35 by thakala           #+#    #+#             */
/*   Updated: 2021/11/05 07:47:44 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*block;

	block = (char *)malloc(sizeof(char) * size);
	if (!block)
		return (block);
	while (size)
		block[--size] = 0;
	block[size] = 0;
	return (block);
}
