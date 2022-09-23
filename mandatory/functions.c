/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:24:08 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/03/15 14:24:14 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
}

void	catch_err(const char *s)
{
	int	i;
	int	t;

	t = 0;
	if (!s || !s[0])
		get_err();
	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i])
	{
		t = 1;
		if (s[i] < '0' || s[i] > '9')
			get_err();
		i++;
	}
	if (!t)
		get_err();
}

int	ft_atoi(const char *str)
{
	unsigned long	number;
	int				i;
	int				sign;

	catch_err(str);
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
			get_err();
		else if (sign == -1 && number > (unsigned long ) MAX_INT + 1)
			get_err();
	}
	return ((int ) number * sign);
}

int	get_elem_pos(t_stack *head, int val)
{
	int	i;

	i = 0;
	while (head)
	{
		if (head->val > val)
			return (i);
		head = head->next;
		i++;
	}
	return (i);
}

void	free_stack(t_stack **a)
{
	t_stack	*node;
	t_stack	*prev;

	node = *a;
	while (node)
	{
		prev = node;
		node = node->next;
		free(prev);
	}
	*a = NULL;
}
