/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:23:39 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/10 11:23:41 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_state_moves(t_stack *a, t_moves *move)
{
	int	min;
	int	pos;
	int	r;
	int	size;

	min = get_min(a);
	pos = get_nodes_pos(a, min);
	size = ft_lstsize(a);
	if (pos >= size / 2)
	{
		r = size - pos;
		move->rra = r;
	}
	else
	{
		r = pos;
		move->ra = r;
	}
}

void	init_move(t_moves *move)
{
	move->ra = 0;
	move->rb = 0;
	move->rra = 0;
	move->rrb = 0;
	move->rr = 0;
	move->rrr = 0;
	move->sa = 0;
	move->sb = 0;
	move->ss = 0;
	move->min = 0;
	move->max = 0;
	move->sum = 0;
}

int	get_rra(int bet, int size)
{
	if (bet < size / 2)
		return (0);
	return (size - bet);
}

int	get_ra(int bet, int size)
{
	if (bet >= size / 2)
		return (0);
	return (bet);
}

void	simpmove(t_moves *move)
{
	if (move->rb > 0 && move->ra > 0)
	{
		while (move->rb && move->ra)
		{
			move->rr += 1;
			if (move->rb)
				move->rb -= 1;
			if (move->ra)
				move->ra -= 1;
		}
	}
	if (move->rra > 0 && move->rrb > 0)
	{
		while (move->rrb && move->rra)
		{
			if (move->rrb)
				move->rrb -= 1;
			if (move->rra)
				move->rra -= 1;
			move->rrr += 1;
		}
	}
}
