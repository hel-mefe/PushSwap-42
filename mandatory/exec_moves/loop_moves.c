/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:20:47 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/10 11:20:48 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_ra(t_stack **a, int m)
{
	int	i;

	i = 0;
	while (i < m)
	{
		ra(a, 1);
		i++;
	}
}

void	do_rra(t_stack **a, int m)
{
	int	i;

	i = 0;
	while (i < m)
	{
		rra(a, 1);
		i++;
	}
}

void	do_rb(t_stack **b, int m)
{
	int	i;

	i = 0;
	while (i < m)
	{
		rb(b, 1);
		i++;
	}
}

void	do_rrb(t_stack **b, int m)
{
	int	i;

	i = 0;
	while (i < m)
	{
		rrb(b, 1);
		i++;
	}
}

void	do_rr(t_stack **a, t_stack **b, int m)
{
	int	i;

	i = 0;
	while (i < m)
	{
		rr(a, b);
		i++;
	}
}
