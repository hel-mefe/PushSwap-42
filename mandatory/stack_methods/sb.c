/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:25:00 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/10 11:25:01 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_stack **b, int m)
{
	t_stack	*node;
	int		tmp;
	int		size;

	size = ft_lstsize(*b);
	if (!size || size == 1)
		return ;
	node = *b;
	tmp = node->val;
	node->val = node->next->val;
	node->next->val = tmp;
	if (m)
		ft_putstr("sb\n");
}
