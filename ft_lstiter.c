/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:20:41 by thakala           #+#    #+#             */
/*   Updated: 2021/11/21 16:41:46 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	segv;

	ft_bzero(&segv, sizeof(t_list));
	if (!lst)
		*lst = segv;
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
