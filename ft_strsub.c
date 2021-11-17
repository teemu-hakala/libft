/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:05:10 by thakala           #+#    #+#             */
/*   Updated: 2021/11/17 15:43:25 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	zu_start;
	size_t	i;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	zu_start = start;
	while (i < len)
		substr[i++] = s[zu_start++];
	substr[i] = '\0';
	return (substr);
}
