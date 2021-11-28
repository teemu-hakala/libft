/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:41:27 by thakala           #+#    #+#             */
/*   Updated: 2021/11/28 13:39:28 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strsep(char **stringp, const char *delim)
{
	char	*beginning;
	size_t	l_delim;

	beginning = *stringp;
	if (!beginning)
		return (beginning);
	l_delim = ft_strlen(delim);
	while (**stringp && ft_strncmp(*stringp, delim, l_delim))
		*stringp++;
	*stringp++ = '\0';
	return (beginning);
}
