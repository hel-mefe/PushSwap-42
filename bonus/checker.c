/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:52:28 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/05/26 17:15:13 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/push_swap.h"

int	cmp(char *line, char *method)
{
	int	i;

	i = 0;
	while (line[i] || method[i])
	{
		if (line[i] != method[i])
			return (line[i] - method[i]);
		i++;
	}
	return (0);
}

void	in_methods(char *l)
{
	if (cmp(l, "ra\n") && cmp(l, "rb\n") && cmp(l, "ss\n") \
		&& cmp(l, "rr\n") && cmp(l, "rrr\n") && cmp(l, "pb\n") \
		&& cmp(l, "sa\n") && cmp(l, "sb\n") && cmp(l, "pa\n") \
		&& cmp(l, "rra\n") && cmp(l, "rrb\n"))
	{
		ft_putstr("Error\n");
		exit(EXIT_FAILURE);
	}
}

void	do_method(t_stack **a, t_stack **b, char *l)
{
	if (!cmp(l, "ra\n"))
		ra_c(a);
	else if (!cmp(l, "rb\n"))
		rb_c(b);
	else if (!cmp(l, "rr\n"))
		rr_c(a, b);
	else if (!cmp(l, "rra\n"))
		rra_c(a);
	else if (!cmp(l, "rrb\n"))
		rrb_c(b);
	else if (!cmp(l, "rrr\n"))
		rrr_c(a, b);
	else if (!cmp(l, "pb\n"))
		pb_c(a, b);
	else if (!cmp(l, "pa\n"))
		pa_c(a, b);
	else if (!cmp(l, "sa\n"))
		sa_c(a);
	else if (!cmp(l, "sb\n"))
		sb_c(b);
	else if (!cmp(l, "ss\n"))
		ss_c(a, b);
}

void	get_error(int ac, char **av)
{
	if (ac < 2)
		exit(EXIT_FAILURE);
	if (!is_args_valid_c(ac, av))
	{
		ft_putstr("Error\n");
		exit(EXIT_FAILURE);
	}
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;

	get_error(ac, av);
	a = NULL;
	b = NULL;
	make_stack_c(&a, ac, av);
	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		in_methods(line);
		do_method(&a, &b, line);
		if (!line)
			break ;
	}
	if (is_sorted(a, b))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	return (0);
}
