/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:25:45 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/10 11:26:05 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_arr(int *arr, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
			j++;
		}
		i++;
	}
}

int	*get_ind_arr(t_stack *a, int size)
{
	int	*arr;
	int	i;

	arr = (int *) malloc (size * sizeof(int));
	if (!arr)
		exit(EXIT_FAILURE);
	i = 0;
	while (i < size && a)
	{
		arr[i] = a->val;
		i++;
		a = a->next;
	}
	return (arr);
}

void	push_to_b(t_stack **a, t_stack **b)
{
	int	*arr;
	int	size;

	size = 5;
	arr = get_ind_arr(*a, 5);
	sort_arr(arr, size);
	while (size > 2)
	{
		if ((*a)->val == arr[3] || (*a)->val == arr[4])
			ra(a, 1);
		else
		{
			pb(a, b);
			if ((*b)->val < arr[1])
				rb(b, 1);
			size--;
		}
	}
}

void	sort_3(t_stack **a, t_stack **b)
{
	while (!is_sorted(*a, *b))
	{
		if (is_max(*a, (*a)->val))
		{
			if (!is_min(*a, (*a)->next->next->val))
				ra(a, 1);
			else
				sa(a, 1);
		}
		else
		{
			if (is_min(*a, (*a)->next->next->val))
				rra(a, 1);
			else
				sa(a, 1);
		}
	}
}

void	sort_5(t_stack **a, t_stack **b)
{
	push_to_b(a, b);
	if ((*b)->val < (*b)->next->val)
		sb(b, 1);
	if ((*a)->val > (*a)->next->val)
		ra(a, 1);
	while (*b)
		pa(a, b);
}
