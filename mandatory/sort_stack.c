/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:45:30 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/17 16:18:43 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_stack *a)
{
	int	min;

	min = MAX_INT;
	while (a)
	{
		if (a->val < min)
			min = a->val;
		a = a->next;
	}
	return (min);
}

int	get_max(t_stack *a)
{
	int	max;

	max = MIN_INT;
	while (a)
	{
		if (a->val > max)
			max = a->val;
		a = a->next;
	}
	return (max);
}

void	push_everything(t_stack **a, t_stack **b, int med)
{
	int	size;
	int	min;
	int	max;

	max = get_max(*a);
	min = get_min(*a);
	size = ft_lstsize(*a);
	while (size > 2)
	{
		if ((*a)->val == max || (*a)->val == min)
			ra(a, 1);
		else
		{
			pb(a, b);
			if ((*b)->val >= med)
				rb(b, 1);
			size--;
		}
	}
	if ((*a)->val > (*a)->next->val)
		sa(a, 1);
}

void	sort_stack(t_stack **a, t_stack **b)
{
	int	median;

	median = find_median(a, b);
	push_everything(a, b, median);
	exec_moves(a, b);
	get_state(a, b);
}
