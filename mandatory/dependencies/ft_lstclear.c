/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:00:49 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/11/25 14:19:48 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	ft_lstclear(t_stack **lst, void (*del)(void *))
{
	t_stack	*node;
	t_stack	*prev;

	if (!(*lst) || !del || !lst)
		return ;
	node = *lst;
	while (node)
	{
		prev = node;
		node = node->next;
		free(prev);
	}
	*lst = NULL;
}
