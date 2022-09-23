/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:24:20 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/10 11:24:21 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*node;
	t_stack	*tmp;

	if (!(*a))
		return ;
	node = ft_lstnew((*a)->val);
	tmp = *a;
	*a = (*a)->next;
	ft_lstadd_front(b, node);
	free(tmp);
	ft_putstr("pb\n");
}
