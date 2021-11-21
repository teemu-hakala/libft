/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:55:30 by thakala           #+#    #+#             */
/*   Updated: 2021/11/21 13:16:50 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	if (!alst)
		return ;
	while (*alst != NULL)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = (*alst)->next;
	}
	*alst = NULL;
}*/

/*
#include "libft.h"
			#include <stdio.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*upcoming;

	while (*alst)
	{
		printf("*alst: %s\n", (char *)((*alst)->content));
		printf("lstdel: %s\n", (char *)((*alst)->content));
		upcoming = (*alst)->next;
		if (upcoming)
			printf("lstdel upcoming: %s\n", (char *)(upcoming->content));
		else
			printf("lstdel upcoming: %s\n", "NULL");
		printf("*alst: %s\n", (char *)((*alst)->content));
		if ((*alst)->content)
		{
			printf("lstdel: calling lstdelone\n");
			ft_lstdelone(alst, del);
		}
		alst = &upcoming;
	}
	*alst = NULL;
}*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*upcoming;
	t_list	*current;

	current = *alst;
	while (current)
	{
		upcoming = current->next;
		if (current)
			ft_lstdelone(&current, del);
		current = upcoming;
	}
	*alst = NULL;
}
/*

#include "libft.h"
			#include <stdio.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	**upcoming;

	while (*alst)
	{
		printf(" *alst: %s\n", (char *)((*alst)->content));
		printf("lstdel: %s\n", (char *)((*alst)->content));
		upcoming = &((*alst)->next);
		if (*upcoming)
			printf("lstdel upcoming: %s\n", (char *)((*upcoming)->content));
		else
			printf("lstdel upcoming: %s\n", "NULL");
		printf("*alst: %s\n", (char *)((*alst)->content));
		if ((*alst))
		{
			printf("lstdel: calling lstdelone\n");
			ft_lstdelone(alst, del);
		}
		alst = upcoming;
	}
	*alst = NULL;
}*/
