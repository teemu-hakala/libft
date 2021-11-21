/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:55:34 by thakala           #+#    #+#             */
/*   Updated: 2021/11/21 19:35:13 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*new_beginning;

	new_beginning = s1;
	while (*s1)
		s1++;
	while (*s2 && n--)
		*s1++ = *s2++;
	*s1++ = '\0';
	return (new_beginning);
}*/

/*
#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*new_beginning;
	size_t	i;

	i = ft_strlen(s1);
	new_beginning = s1;
	while (*s2 && n--)
		s1++[i] = *s2++;
	s1[i] = '\0';
	return (new_beginning);
}
*/
#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = ft_strlen(s1);
	while (*s2 && n--)
		s1[i++] = *s2++;
	s1[i] = '\0';
	return (s1);
}
