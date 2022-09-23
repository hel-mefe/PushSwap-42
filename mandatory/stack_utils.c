/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:29:24 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/05/25 21:08:52 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *a, t_stack *b)
{
	t_stack	*node;

	if (b)
		return (0);
	node = a;
	while (node->next)
	{
		if (node->val > node->next->val)
			return (0);
		node = node->next;
	}
	return (1);
}

void	make_stack(t_stack **head, int ac, char **av)
{
	t_stack	*node;
	int		i;
	int		j;
	int		val;
	char	**m;

	i = 1;
	while (i < ac)
	{
		val = ft_atoi(av[i]);
		node = ft_lstnew(val);
		node->val = val;
		ft_lstadd_back(head, node);
		i++;
	}
}

void	print_stack(t_stack *head)
{
	t_stack	*node;

	node = head;
	while (node)
	{
		printf("%d ", node->val);
		node = node->next;
	}
}

void	free_m(char **m)
{
	int	i;

	i = 0;
	while (m[i])
	{
		free(m + i);
		i++;
	}
}
