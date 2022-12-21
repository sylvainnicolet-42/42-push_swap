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
OBJS		= $(SRCS:.c=.o)
CC			= gcc
FLAGS 		= -Wall -Werror -Wextra
SANITIZE	= -fsanitize=address

# SOURCES
SRCS		= 	./srcs/push_swap.c \
				./srcs/manipulations/push_a.c \
				./srcs/manipulations/push_b.c \
				./srcs/manipulations/rotate_a.c \
				./srcs/manipulations/rotate_b.c \
				./srcs/manipulations/rotate_rb.c \
				./srcs/manipulations/rotate_ra.c \
				./srcs/manipulations/rotate_rr.c \
				./srcs/manipulations/rotate_rrr.c \
				./srcs/manipulations/swap_a.c \
				./srcs/manipulations/swap_b.c \
				./srcs/manipulations/swap_ss.c

# COLORS
_END=$'\x1b[0m'
_SUCCESS=$'\x1b[42m'
_CLEANED=$'\x1b[44m'

# COMMANDS
$(NAME): 		$(OBJS)
				make -C libft
				$(CC) $(FLAGS) $(OBJS) libft/libft.a -o $(NAME)

all:			$(NAME)

%.o: %.c
				$(CC) -c $(FLAGS) -o $@ $^

clean:
				make clean -C libft
				/bin/rm -rf $(OBJS)
				@echo "$(_CLEANED)🧹Clean object files!$(_END)"

fclean: 		clean
				make fclean -C libft
				/bin/rm -rf $(NAME)
				@echo "$(_CLEANED)🧹Clean executable files!$(_END)"

lldb:
				$(CC) -g $(SRCS) libft/libft.a -o $(NAME)
				lldb $(NAME)

re: 			fclean all
				@echo "$(_SUCCESS)🧹Clean + 🚀Build!$(_END)"

run:			all
				@$(CC) $(FLAGS) $(SANITIZE) $(OBJS) libft/libft.a -o $(NAME)
				@./$(NAME) 3 2 1

.PHONY:			all clean fclean re