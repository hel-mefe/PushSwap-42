/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:44:13 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/05/26 17:17:14 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../mandatory/push_swap.h"

void	get_aterr(void)
{
	ft_putstr("Error\n");
	exit(EXIT_FAILURE);
}

void	catch_err_c(const char *s)
{
	int	i;

	if (!s || !s[0])
	{
		ft_putstr("Error\n");
		exit(EXIT_FAILURE);
	}
	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			ft_putstr("Error\n");
			exit(EXIT_FAILURE);
		}
		i++;
	}
}

int	ft_atoi_c(const char *str)
{
	unsigned long	number;
	int				i;
	int				sign;

	catch_err_c(str);
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i++] - '0';
		if (sign == 1 && number > MAX_INT)
			get_aterr();
		else if (sign == -1 && number > (unsigned long ) MAX_INT + 1)
			get_aterr();
	}
	return ((int ) number * sign);
}

void	make_stack_c(t_stack **head, int ac, char **av)
{
	t_stack	*node;
	int		i;
	int		val;

	i = 1;
	while (i < ac)
	{
		val = ft_atoi_c(av[i]);
		node = ft_lstnew(val);
		node->val = val;
		ft_lstadd_back(head, node);
		i++;
	}
}

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
