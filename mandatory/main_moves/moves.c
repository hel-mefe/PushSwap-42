/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:23:47 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/10 11:23:49 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_min(t_stack *a, int val)
{
	while (a)
	{
		if (a->val < val)
			return (0);
		a = a->next;
	}
	return (1);
}

int	is_max(t_stack *a, int val)
{
	while (a)
	{
		if (a->val > val)
			return (0);
		a = a->next;
	}
	return (1);
}

t_moves	*get_node(t_stack *a, t_stack *b, t_stack *node)
{
	t_moves	*move;

	move = (t_moves *) malloc (sizeof(t_moves));
	init_move(move);
	if (is_max(a, node->val))
		move->max = 1;
	else if (is_min(a, node->val))
		move->min = 1;
	get_data(a, b, node, move);
	return (move);
}

t_moves	*get_best(t_moves *head)
{
	t_moves	*best;

	best = head;
	while (head)
	{
		if (head->sum < best->sum)
			best = head;
		head = head->next;
	}
	return (best);
}

t_moves	*get_all_moves(t_stack **a, t_stack **b)
{
	t_stack	*head;
	t_moves	*node;
	t_moves	*moves;

	moves = NULL;
	head = *b;
	while (head)
	{
		node = get_node(*a, *b, head);
		add_move(&moves, node);
		head = head->next;
	}
	return (moves);
}
