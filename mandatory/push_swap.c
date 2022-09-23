/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:47:45 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/17 16:20:11 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack **a, t_stack **b)
{
	if ((*a)->val > (*a)->next->val)
		sa(a, 1);
}

void	get_err(void)
{
	write(2, "Error", 5);
	exit(EXIT_FAILURE);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac == 1)
		exit(EXIT_FAILURE);
	if (!is_args_valid(ac, av))
		get_err();
	a = NULL;
	b = NULL;
	make_stack(&a, ac, av);
	if (!is_sorted(a, b))
	{
		if (ac == 6)
			sort_5(&a, &b);
		else if (ac == 4)
			sort_3(&a, &b);
		else if (ac == 2)
			sort_2(&a, &b);
		else
			sort_stack(&a, &b);
	}
	free_stack(&a);
	return (0);
}
