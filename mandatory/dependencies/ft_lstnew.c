/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:56:15 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/11/25 14:16:18 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lstnew(int val)
{
	t_stack	*node;

	node = (t_stack *) malloc (sizeof(t_stack));
	if (!node)
		return (0);
	node->val = val;
	node->next = 0;
	return (node);
}
