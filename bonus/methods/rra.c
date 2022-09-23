/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:22:04 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/17 15:29:58 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mandatory/push_swap.h"

void	rra_c(t_stack **a)
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
}
