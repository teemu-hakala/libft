/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:58:11 by thakala           #+#    #+#             */
/*   Updated: 2021/11/02 16:00:02 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isascii(int c)
{
	return (c >= 0 && c <= 0177);
}
