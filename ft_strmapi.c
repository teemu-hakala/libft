/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:29:05 by thakala           #+#    #+#             */
/*   Updated: 2021/11/14 18:41:55 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_beginning;
	size_t			length;
	unsigned int	i;

	length = ft_strlen(s);
	new_beginning = (char *)malloc(sizeof(char) * (length + 1));
	if (!length && !new_beginning)
		return (new_beginning);
	i = 0;
	while (*s)
	{
		*new_beginning++ = f(i++, *s++);
	}
	*new_beginning = *s;
	return (new_beginning - length);
}
