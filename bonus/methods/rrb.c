/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:22:11 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/17 15:30:10 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mandatory/push_swap.h"

void	rrb_c(t_stack **b)
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
}
