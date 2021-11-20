/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:19:47 by thakala           #+#    #+#             */
/*   Updated: 2021/11/20 11:43:23 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		coefficient;
	int		result;

	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	coefficient = 1;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		coefficient = -1;
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
		result = 10 * result + *str++ - '0';
	return (coefficient * result);
}
