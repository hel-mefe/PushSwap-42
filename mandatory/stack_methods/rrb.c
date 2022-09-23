/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:24:47 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/10 11:24:48 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_stack **b, int m)
{
	t_stack	*last;
	t_stack	*bf_last;
	t_stack	*head;
	int		stack_size;

	stack_size = ft_lstsize(*b);
	if (!b || !(*b) || stack_size == 1)
		return ;
	head = *b;
	last = ft_lstlast(*b);
	bf_last = ft_lstbflast(*b);
	bf_last->next = NULL;
	last->next = *b;
	*b = last;
	if (m)
		ft_putstr("rrb\n");
}
