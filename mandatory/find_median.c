/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_median.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:45:52 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/10 15:45:54 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*t_stack *find_median(t_stack *head)
{
    t_stack *node;
    int     size;
    int     med;
    int     is_pair;
    int     i;

    if (!head)
        return (0);
    is_pair = 0;
    node = head;
    size = ft_lstsize(node);
    if (size % 2)
        is_pair = 1;
    med = size / 2;
    i = 0;
    while (i < med)
    {
        i++;
        node = node->next;
    }
    return (node);
}

t_stack *find */

void	set_indexing_arr(int *arr, int arr_size)
{
	int	i;

	i = 0;
	while (i < arr_size)
	{
		arr[i] = -1;
		i++;
	}
}

int	*index_stacks(t_stack **a, t_stack **b, int t_size)
{
	t_stack	*node;
	int		i;
	int		*arr;

	arr = (int *) malloc (t_size * sizeof(int));
	node = *a;
	while (node)
	{
		i = get_elem_pos(*a, node->val);
		i += get_elem_pos(*b, node->val);
		if (i < t_size)
			arr[i] = node->val;
		node = node->next;
	}
	node = *b;
	while (node)
	{
		i = get_elem_pos(*a, node->val);
		i += get_elem_pos(*b, node->val);
		if (i < t_size)
			arr[i] = node->val;
		node = node->next;
	}
	return (arr);
}

int	find_median(t_stack **a, t_stack **b)
{
	int		*arr;
	int		size;
	int		median;

	size = ft_lstsize(*a) + ft_lstsize(*b);
	arr = index_stacks(a, b, size);
	if (!arr)
		exit(EXIT_FAILURE);
	median = arr[size / 2];
	free (arr);
	arr = NULL;
	return (median);
}
