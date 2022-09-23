/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:24:13 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/10 11:24:14 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*node;
	t_stack	*tmp;

	if (!(*b))
		return ;
	node = ft_lstnew((*b)->val);
	tmp = *b;
	*b = (*b)->next;
	ft_lstadd_front(a, node);
	free(tmp);
	ft_putstr("pa\n");
}
