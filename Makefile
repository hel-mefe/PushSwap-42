CHECKER	=	checker
PROGRAM	=	push_swap
PROGRAM_SRCS = mandatory/push_swap.c mandatory/stack_utils.c mandatory/errors.c \
			   mandatory/find_median.c mandatory/functions.c mandatory/sort_stack.c \
			   mandatory/stack_methods/pa.c mandatory/stack_methods/pb.c \
			   mandatory/stack_methods/ra.c mandatory/stack_methods/rb.c \
			   mandatory/stack_methods/rr.c mandatory/stack_methods/rra.c \
			   mandatory/stack_methods/rrb.c mandatory/stack_methods/rrr.c \
			   mandatory/stack_methods/sa.c mandatory/stack_methods/sb.c \
			   mandatory/stack_methods/ss.c mandatory/sort_5.c mandatory/main_moves/get_data.c \
			   mandatory/main_moves/linked_list.c mandatory/main_moves/min_max.c \
			   mandatory/main_moves/moves.c mandatory/exec_moves/exec.c \
			   mandatory/exec_moves/loop_moves.c mandatory/dependencies/ft_lstadd_front.c \
			   mandatory/dependencies/ft_lstadd_back.c mandatory/dependencies/ft_lstbflast.c \
			   mandatory/dependencies/ft_lstclear.c mandatory/dependencies/ft_lstlast.c \
			   mandatory/dependencies/ft_lstnew.c mandatory/dependencies/ft_lstsize.c

CHECKER_SRCS = bonus/errors.c bonus/print_str.c bonus/checker.c bonus/functions.c bonus/get_next_line.c bonus/get_next_line_utils.c \
			   bonus/methods/pa.c bonus/methods/pb.c bonus/methods/ra.c bonus/methods/rb.c \
			   bonus//methods/rr.c bonus/methods/rra.c bonus/methods/rrb.c bonus/methods/rrr.c \
			   bonus/methods/sa.c bonus/methods/sb.c bonus/methods/ss.c \
			   mandatory/dependencies/ft_lstadd_back.c \
			   mandatory/dependencies/ft_lstbflast.c \
               mandatory/dependencies/ft_lstclear.c mandatory/dependencies/ft_lstlast.c mandatory/dependencies/ft_lstadd_front.c \
               mandatory/dependencies/ft_lstnew.c mandatory/dependencies/ft_lstsize.c

PROGRAM_OBJS := ${PROGRAM_SRCS:c=o}
CHECKER_OBJS := ${CHECKER_SRCS:c=o}
CC 	=	gcc
CFLAGS	=	-Wall -Wextra -Werror

all: $(PROGRAM)

$(PROGRAM): $(PROGRAM_OBJS)
	$(CC) $(CFLAGS) $(PROGRAM_OBJS) -o $(PROGRAM)

$(CHECKER): $(CHECKER_OBJS)
	$(CC) $(CFLAGS) $(CHECKER_OBJS) -o $(CHECKER)

%.o: %.c
	$(CC) -c $< -o $@

bonus: $(CHECKER)

clean:
	@rm -rf *.o */*.o */*/*.o

fclean: clean
	@rm -f $(PROGRAM) $(CHECKER)
re: fclean all

.PHONY: all bonus clean fclean re
