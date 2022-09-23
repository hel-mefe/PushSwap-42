/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:20:38 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/10 11:20:39 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_rrr(t_stack **a, t_stack **b, int m)
{
	int	i;

	i = 0;
	while (i < m)
	{
		rrr(a, b);
		i++;
	}
}

void	exec_move(t_stack **a, t_stack **b, t_moves *move)
{
	if (move->ra)
		do_ra(a, move->ra);
	if (move->rb)
		do_rb(b, move->rb);
	if (move->rra)
		do_rra(a, move->rra);
	if (move->rrb)
		do_rrb(b, move->rrb);
	if (move->rr)
		do_rr(a, b, move->rr);
	if (move->rrr)
		do_rrr(a, b, move->rrr);
	pa(a, b);
}

void	exec_moves(t_stack **a, t_stack **b)
{
	t_moves	*all;
	t_moves	*best;

	while (*b)
	{
		all = get_all_moves(a, b);
		best = get_best(all);
		exec_move(a, b, best);
		free_moves(all);
	}
}

void	get_state(t_stack **a, t_stack **b)
{
	t_moves	*move;

	move = (t_moves *) malloc (sizeof(t_moves));
	init_move(move);
	get_state_moves(*a, move);
	exec_move(a, b, move);
	free(move);
}
