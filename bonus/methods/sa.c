/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:22:20 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/17 15:30:33 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mandatory/push_swap.h"

void	sa_c(t_stack **a)
{
	t_stack	*node;
	int		tmp;
	int		size;

	size = ft_lstsize(*a);
	if (!size || size == 1)
		return ;
	node = *a;
	tmp = node->val;
	node->val = node->next->val;
	node->next->val = tmp;
}
