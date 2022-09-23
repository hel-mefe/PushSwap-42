/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:22:25 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/17 15:30:45 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mandatory/push_swap.h"

void	sb_c(t_stack **b)
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
}
