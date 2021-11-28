/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:41:27 by thakala           #+#    #+#             */
/*   Updated: 2021/11/28 12:54:05 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strsep(char **stringp, const char *delim)
{
	char	*beginning;

	beginning = *stringp;
	if (!beginning)
		return (beginning);
	while (*stringp && *stringp != delim)
		*stringp++;
	*stringp++ = '\0';
	return (beginning);
}
