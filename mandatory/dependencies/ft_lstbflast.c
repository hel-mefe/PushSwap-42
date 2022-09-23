/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstbflast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:19:59 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/10 11:20:00 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lstbflast(t_stack *head)
{
	t_stack	*node;
	int		stack_size;

	stack_size = ft_lstsize(head);
	if (!head || stack_size == 1)
		return (NULL);
	node = head;
	while (node->next->next)
		node = node->next;
	return (node);
}
