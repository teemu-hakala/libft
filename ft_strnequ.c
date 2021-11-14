/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:57:58 by thakala           #+#    #+#             */
/*   Updated: 2021/11/14 20:40:25 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!n)
		return (1);
	while (*s1 && *s1 == *s2 && --n > 0)
	{
		s1++;
		s2++;
	}
	return (*s1 == *s2);
}
