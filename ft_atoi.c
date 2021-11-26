/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:19:47 by thakala           #+#    #+#             */
/*   Updated: 2021/11/26 20:17:41 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		coefficient;
	int		result;

	while (ft_isspace(*str))
		str++;
	coefficient = 1;
	if (*str == '+' || *str == '-')
		coefficient = -(*str++ - 44);
	result = 0;
	while (ft_isdigit(*str))
		result = 10 * result + *str++ - '0';
	return (coefficient * result);
}
