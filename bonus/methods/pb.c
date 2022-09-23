/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:21:42 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/17 15:29:17 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mandatory/push_swap.h"

void	pb_c(t_stack **a, t_stack **b)
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
}
