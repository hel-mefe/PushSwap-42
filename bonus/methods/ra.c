/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:21:47 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/17 15:29:26 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mandatory/push_swap.h"

void	ra_c(t_stack **a)
{
	t_stack	*last;
	t_stack	*head;
	int		stack_size;

	if (!(*a) || !a)
		return ;
	stack_size = ft_lstsize(*a);
	if (stack_size == 1)
		return ;
	head = *a;
	last = ft_lstlast(*a);
	*a = (*a)->next;
	head->next = NULL;
	last->next = head;
}
