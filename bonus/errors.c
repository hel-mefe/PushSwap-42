/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:29:56 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/17 15:09:23 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/push_swap.h"

int	skip_spaces_c(char *av)
{
	int	i;

	i = 0;
	while (av[i] && av[i] == ' ')
		i++;
	return (i);
}

int	is_pl_min_valid_c(char *av)
{
	int	i;
	int	minus;
	int	plus;

	plus = 1;
	minus = 1;
	i = 0;
	while (av[i] && (av[i] == '+' || av[i] == '-'))
	{
		if (av[i] == '+')
		{
			if (minus != 1 || plus <= 0)
				return (0);
			plus--;
		}
		else if (av[i] == '-')
		{
			if (plus != 1 || minus <= 0)
				return (0);
			minus--;
		}
		i++;
	}
	return (1);
}

int	handle_chars_c(char *av)
{
	int	i;

	i = 0;
	while (av[i] && (av[i] == '+' || av[i] == '-'))
		i++;
	while (av[i])
	{
		if (av[i] >= '0' && av[i] <= '9')
			i++;
		else
			break ;
	}
	while (av[i])
	{
		if (av[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	check_duplicates_c(int ac, char **av)
{
	int	i;
	int	j;
	int	val;

	i = 1;
	while (i < ac - 1)
	{
		val = ft_atoi_c(av[i]);
		j = i + 1;
		while (j < ac)
		{
			if (val == ft_atoi_c(av[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_args_valid_c(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		j = skip_spaces_c(av[i]);
		if (!is_pl_min_valid_c(av[i] + j))
			return (0);
		if (!handle_chars_c(av[i] + j))
			return (0);
		i++;
	}
	if (!check_duplicates_c(ac, av))
		return (0);
	return (1);
}
