/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:24:39 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/10 11:24:40 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack **a, int m)
{
	t_stack	*last;
	t_stack	*bf_last;
	t_stack	*head;
	int		stack_size;

	stack_size = ft_lstsize(*a);
	if (!a || !(*a) || stack_size == 1)
		return ;
	head = *a;
	last = ft_lstlast(*a);
	bf_last = ft_lstbflast(*a);
	bf_last->next = NULL;
	last->next = *a;
	*a = last;
	if (m)
		ft_putstr("rra\n");
}
