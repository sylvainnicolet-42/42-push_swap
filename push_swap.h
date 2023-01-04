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

/**
 * Libraries
*/
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

/**
 * Structure
*/
typedef struct s_stack
{
	int				nbr;
	struct s_stack	*next;
}	t_stack;

/**
 * Validation
*/
t_stack	*ft_check(int argc, char **argv);
t_stack	*ft_check_sub(char **argv);
int		ft_check_dup(t_stack *stack);
int		ft_check_sorted(t_stack *stack);

int		ft_atoi2(const char *str);
int		ft_atoi2_ext(const char *str, int sign, int i);
void	ft_free_str(char **lst);

/**
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
int		ft_stack_find_index(t_stack *stack, int nbr);

/**
 * Sorting
*/
void	ft_sort(t_stack **stack_a);
void	ft_sort_b(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_b_until_3(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_last_three(t_stack **stack);
void	ft_sort_a(t_stack **stack_a, t_stack **stack_b);

/**
 * Moves calculation
*/
int		ft_best_rotations_to_b(t_stack *stack_a, t_stack *stack_b);
int		ft_best_rotations_to_a(t_stack *stack_a, t_stack *stack_b);
int		ft_find_pos_b(t_stack *stack_b, int nbr_push);
int		ft_find_pos_a(t_stack *stack_a, int nbr_push);

/**
 * Solvers
*/
int		ft_solver_b_rarb(t_stack *stack_a, t_stack *stack_b, int nbr_push);
int		ft_solver_b_rrarrb(t_stack *stack_a, t_stack *stack_b, int nbr_push);
int		ft_solver_b_rrarb(t_stack *stack_a, t_stack *stack_b, int nbr_push);
int		ft_solver_b_rarrb(t_stack *stack_a, t_stack *stack_b, int nbr_push);
int		ft_solver_a_rarb(t_stack *stack_a, t_stack *stack_b, int nbr_push);
int		ft_solver_a_rrarrb(t_stack *stack_a, t_stack *stack_b, int nbr_push);
int		ft_solver_a_rrarb(t_stack *stack_a, t_stack *stack_b, int nbr_push);
int		ft_solver_a_rarrb(t_stack *stack_a, t_stack *stack_b, int nbr_push);

/**
 * Apply
*/
int		ft_apply_rarb(t_stack **stack_a, t_stack **stack_b, int nbr_push, char s);
int		ft_apply_rrarrb(t_stack **stack_a, t_stack **stack_b, int nbr_push, char s);
int		ft_apply_rrarb(t_stack **stack_a, t_stack **stack_b, int nbr_push, char s);
int		ft_apply_rarrb(t_stack **stack_a, t_stack **stack_b, int nbr_push, char s);

/**
 * Manipulations
*/
void	ft_push_a(t_stack **stack_a, t_stack **stack_b);
void	ft_push_b(t_stack **stack_a, t_stack **stack_b);
void	ft_rotate_a(t_stack **stack_a, int show);
void	ft_rotate_b(t_stack **stack_b, int show);
void	ft_rotate_ra(t_stack **stack_a, int show);
void	ft_rotate_rb(t_stack **stack_b, int show);
void	ft_rotate_rr(t_stack **stack_a, t_stack **stack_b);
void	ft_rotate_rrr(t_stack **stack_a, t_stack **stack_b);
void	ft_swap_a(t_stack **stack_a, int show);
void	ft_swap_b(t_stack **stack_b, int show);
//void	ft_swap_ss(t_stack **stack_a, t_stack **stack_b);

void	ft_error(void);

#endif