/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:26:11 by hel-mefe          #+#    #+#             */
/*   Updated: 2022/04/17 15:26:17 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct stack
{
	int				val;
	struct stack	*next;
}	t_stack;

typedef struct moves
{
	int				min;
	int				max;
	int				ra;
	int				rb;
	int				rr;
	int				pa;
	int				pb;
	int				sa;
	int				sb;
	int				ss;
	int				rra;
	int				rrb;
	int				rrr;
	int				sum;
	struct moves	*next;
}			t_moves;
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstclear(t_stack **lst, void (*del)(void *));
void	ft_lstdelone(t_stack *lst, void (*del)(void *));
void	ft_lstiter(t_stack *lst, void (*f)(void *));
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstmap(t_stack *lst, void *(*f)(void *), void (*del)(void *));
t_stack	*ft_lstnew(int val);
t_stack	*ft_lstbflast(t_stack *head);
int		ft_lstsize(t_stack *lst);
void	sa(t_stack **a, int m);
void	sb(t_stack **b, int m);
void	ss(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	rra(t_stack **a, int m);
void	rrb(t_stack **b, int m);
void	ra(t_stack **a, int m);
void	rb(t_stack **b, int m);
void	rr(t_stack **a, t_stack **b);
void	rrr(t_stack **a, t_stack **b);
int		skip_spaces(char *av);
int		is_pl_min_valid(char *av);
int		handle_chars(char *av);
int		is_args_valid(int ac, char **av);
int		check_duplicates(int ac, char **av);
int		is_sorted(t_stack *a, t_stack *b);
void	make_stack(t_stack **head, int ac, char **av);
void	print_stack(t_stack *head);
int		find_position(t_stack *head, int val);
void	sort_under_five(t_stack **a, t_stack **b);
void	sort_5(t_stack **a, t_stack **b);
void	push_to_b(t_stack **a, t_stack **b);
void	sort_3(t_stack **a, t_stack **b);
void	sort_stack(t_stack **a, t_stack **b);
void	push_everything(t_stack **a, t_stack **b, int med);
void	free_stack(t_stack **a);
void	ft_putstr(char *s);
int		ft_atoi(const char *str);
int		*get_arr(int size);
int		get_val(int *arr, int *cache, int a);
void	init_arr(int *arr, int size);
int		*list_to_arr(t_stack *head, int size);
int		*find_top(int *cache, int size);
t_stack	*get_nodebypos(t_stack *head, int pos);
int		get_elem_pos(t_stack *head, int val);
void	set_indexing_arr(int *arr, int arr_size);
int		*index_stacks(t_stack **a, t_stack **b, int t_size);
int		find_median(t_stack **a, t_stack **b);
int		*index_list(t_stack *head, int size);
void	exec_moves(t_stack **a, t_stack **b);
void	get_state(t_stack **a, t_stack **b);
void	do_ra(t_stack **a, int m);
void	do_rra(t_stack **a, int m);
void	do_rb(t_stack **b, int m);
void	do_rrb(t_stack **b, int m);
void	do_rr(t_stack **a, t_stack **b, int m);
void	do_rrr(t_stack **a, t_stack **b, int m);
void	get_state_moves(t_stack *a, t_moves *move);
int		get_rb(t_stack *b, t_stack *node, int size);
int		get_rrb(t_stack *b, t_stack *node, int size);
int		get_sum(t_moves *move);
int		get_intbetween(t_stack *a, t_stack *node);
void	init_move(t_moves *move);
int		get_rra(int bet, int size);
int		get_ra(int bet, int size);
void	get_data(t_stack *a, t_stack *b, t_stack *node, t_moves *move);
int		get_nodes_pos(t_stack *b, int val);
int		is_min(t_stack *a, int val);
int		is_max(t_stack *a, int val);
int		get_min(t_stack *a);
int		get_max(t_stack *a);
t_moves	*get_node(t_stack *a, t_stack *b, t_stack *node);
t_moves	*get_best(t_moves *head);
t_moves	*get_all_moves(t_stack **a, t_stack **b);
void	simpmove(t_moves *move);
void	add_move(t_moves **head, t_moves *node);
void	free_moves(t_moves *head);
void	do_moves(t_stack **a, t_stack **b, t_moves *best);
void	do_required_moves(t_stack **a, t_stack **b);
void	print_moves(t_moves *move);
int		cmp(char *line, char *method);
void	in_methods(char *l);
void	do_method(t_stack **a, t_stack **b, char *l);
char	*get_next_line(int fd);
void	pa_c(t_stack **a, t_stack **b);
void	pb_c(t_stack **a, t_stack **b);
void	ra_c(t_stack **a);
void	rb_c(t_stack **b);
void	rr_c(t_stack **a, t_stack **b);
void	rra_c(t_stack **a);
void	rrb_c(t_stack **b);
void	rrr_c(t_stack **a, t_stack **b);
void	sa_c(t_stack **a);
void	sb_c(t_stack **b);
void	ss_c(t_stack **a, t_stack **b);
void	make_stack_c(t_stack **head, int ac, char **av);
void	get_aterr(void);
int		ft_atoi_c(const char *str);
int		is_args_valid_c(int ac, char **av);
int		check_duplicates_c(int ac, char **av);
int		handle_chars_c(char *av);
int		is_pl_min_valid_c(char *av);
int		skip_spaces_c(char *av);
void	get_err(void);
char	**ft_split(char const *s, char c);
void	free_m(char **m);
size_t	ft_strlen(const char *s);
#endif
