/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:24:25 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/10 11:24:26 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack **a, int m)
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
	if (m)
		ft_putstr("ra\n");
}
