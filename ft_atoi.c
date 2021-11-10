/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:19:47 by thakala           #+#    #+#             */
/*   Updated: 2021/11/10 17:26:24 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		coefficient;
	int		result;

	if ((*str >= '\t' && *str <= '\r') || *str == ' ')
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
