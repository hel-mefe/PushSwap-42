/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:21:53 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/17 15:29:37 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mandatory/push_swap.h"

void	rb_c(t_stack **b)
{
	t_stack	*last;
	t_stack	*head;
	int		stack_size;

	if (!(*b) || !b)
		return ;
	stack_size = ft_lstsize(*b);
	if (stack_size == 1)
		return ;
	head = *b;
	last = ft_lstlast(*b);
	*b = (*b)->next;
	head->next = NULL;
	last->next = head;
}
