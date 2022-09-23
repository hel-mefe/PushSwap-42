/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:21:37 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/17 15:29:04 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mandatory/push_swap.h"

void	pa_c(t_stack **a, t_stack **b)
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
}
