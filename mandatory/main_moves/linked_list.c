/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:23:34 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/10 11:23:35 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_move(t_moves **head, t_moves *node)
{
	if (!(*head))
	{
		node->next = NULL;
		*head = node;
	}
	else
	{
		node->next = *head;
		*head = node;
	}
}

void	free_moves(t_moves *head)
{
	t_moves	*prev;

	while (head)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}

int	get_nodes_pos(t_stack *b, int val)
{
	int	i;

	i = 0;
	while (b)
	{
		if (b->val == val)
			return (i);
		i++;
		b = b->next;
	}
	return (i);
}
