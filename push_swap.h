/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:58:31 by synicole          #+#    #+#             */
/*   Updated: 2022/11/29 13:58:33 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*
 * Libraries
*/
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

/*
 * Structure
*/
typedef struct s_stack
{
	int				nbr;
	struct s_stack	*next;
}	t_stack;

/*
 * Validation
*/
t_stack	*ft_check(int argc, char **argv);
t_stack	*ft_check_sub(char **argv);
int		ft_check_dup(t_stack *stack);
int		ft_check_sorted(t_stack *stack);

int		ft_atoi2(const char *str);
int		ft_atoi2_ext(const char *str, int sign, int i);
void	ft_free_str(char **lst);

/*
 * Stack
*/
t_stack	*ft_stack_create(int content);
void	ft_stack_add_back(t_stack **stack, t_stack *stack_new);
t_stack	*ft_stack_get_last(t_stack *stack);
t_stack	*ft_stack_get_before_last(t_stack *stack);
void	ft_stack_clear(t_stack **stack);
int		ft_stack_size(t_stack *stack);
int		ft_stack_get_min(t_stack *stack);
int		ft_stack_get_max(t_stack *stack);

/*
 * Sorting
*/
void	ft_sort(t_stack **stack_a);
void	ft_sort_b(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_last_three(t_stack **stack);

/*
 * Manipulations
*/
void	ft_push_a(void);
void	ft_push_b(t_stack **stack_a, t_stack **stack_b);
void	ft_rotate_a(t_stack **stack_a);
void	ft_rotate_b(void);
void	ft_rotate_ra(t_stack **stack_a);
void	ft_rotate_rb(void);
void	ft_rotate_rr(void);
void	ft_rotate_rrr(void);
void	ft_swap_a(t_stack **stack_a);
void	ft_swap_b(void);
void	ft_swap_ss(void);

void	ft_error(void);

#endif