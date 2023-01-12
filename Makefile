# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 14:10:25 by synicole          #+#    #+#              #
#    Updated: 2022/11/29 14:10:27 by synicole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# VARIABLES
NAME 		= push_swap
PUSH_SWAP_OBJ		= $(PUSH_SWAP_SRC:.c=.o)
OBJS		= $(SRCS:.c=.o)
CC			= gcc -g
FLAGS 		= -Wall -Werror -Wextra
SANITIZE	= -fsanitize=address

# SOURCES
PUSH_SWAP_SRC	= ./srcs/push_swap.c \

SRCS			= ./srcs/validation.c \
				  ./srcs/ft_error.c \
				  ./srcs/ft_check_dup.c \
				  ./srcs/ft_check_sorted.c \
				  ./srcs/ft_stack_create.c \
				  ./srcs/ft_stack_add_back.c \
				  ./srcs/ft_stack_get_last.c \
				  ./srcs/ft_stack_get_before_last.c \
				  ./srcs/ft_stack_get_min.c \
				  ./srcs/ft_stack_get_max.c \
				  ./srcs/ft_stack_clear.c \
				  ./srcs/ft_stack_size.c \
				  ./srcs/ft_stack_find_index.c \
				  ./srcs/ft_sort.c \
				  ./srcs/sort_a.c \
				  ./srcs/sort_b.c \
				  ./srcs/best_rotations.c \
				  ./srcs/solver_a.c \
				  ./srcs/solver_b.c \
				  ./srcs/find_position.c \
				  ./srcs/apply_a.c \
				  ./srcs/apply_b.c \
				  ./srcs/manipulations/ft_push_a.c \
				  ./srcs/manipulations/ft_push_b.c \
				  ./srcs/manipulations/ft_rotate_a.c \
				  ./srcs/manipulations/ft_rotate_b.c \
				  ./srcs/manipulations/ft_rotate_rb.c \
				  ./srcs/manipulations/ft_rotate_ra.c \
				  ./srcs/manipulations/ft_rotate_rr.c \
				  ./srcs/manipulations/ft_rotate_rrr.c \
				  ./srcs/manipulations/ft_swap_a.c \
				  ./srcs/manipulations/ft_swap_b.c \
				  ./srcs/manipulations/ft_swap_ss.c

# COLORS
_END=$'\x1b[0m'
_SUCCESS=$'\x1b[42m'
_CLEANED=$'\x1b[44m'

# COMMANDS
$(NAME): 		$(PUSH_SWAP_OBJ) $(OBJS)
				make -C libft
				$(CC) $(FLAGS) $(PUSH_SWAP_OBJ) $(OBJS) libft/libft.a -o $(NAME)

all:			$(NAME)

%.o: %.c
				$(CC) -c $(FLAGS) -o $@ $^

clean:
				make clean -C libft
				/bin/rm -rf $(PUSH_SWAP_OBJ) $(OBJS)
				@echo "$(_CLEANED)🧹Clean object files!$(_END)"

fclean: 		clean
				make fclean -C libft
				/bin/rm -rf $(NAME)
				@echo "$(_CLEANED)🧹Clean executable files!$(_END)"

re: 			fclean all
				@echo "$(_SUCCESS)🧹Clean + 🚀Build!$(_END)"

run:			all
				@$(CC) $(FLAGS) $(SANITIZE) $(OBJS) libft/libft.a -o $(NAME)
				@./$(NAME)

.PHONY:			all clean fclean re