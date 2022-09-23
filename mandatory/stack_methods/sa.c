/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:24:55 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/10 11:24:56 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack **a, int m)
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
	if (m)
		ft_putstr("sa\n");
}
