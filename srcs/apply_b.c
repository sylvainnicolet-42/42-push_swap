/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:40:47 by synicole          #+#    #+#             */
/*   Updated: 2023/01/05 13:40:49 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * Function is used during push from B to A.
 * Rotates both stack_a and stack_b in the correct direction ↑.
 *
 * 1. Rotate ↑ stack_a & stack_b if
 * 	  the number on the top of stack_b != push_number
 * 	  && the push_number can't go on top.
 * 2. Rotate ↑ stack_b until the number on the top of stack_b == push_number.
 * 3. Rotate ↑ stack_a until the push_number can go on top.
 * 4. Push number from stack_b to stack_a
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @param int nbr_push
 * @return int -1
*/
int	ft_apply_b_rarb(t_stack **stack_a, t_stack **stack_b, int nbr_push)
{
	while ((*stack_b)->nbr != nbr_push && ft_find_pos_a(*stack_a, nbr_push) > 0)
		ft_rotate_rr(stack_a, stack_b, 1);
	while ((*stack_b)->nbr != nbr_push)
		ft_rotate_b(stack_b, 1);
	while (ft_find_pos_a(*stack_a, nbr_push) > 0)
		ft_rotate_a(stack_a, 1);
	ft_push_a(stack_a, stack_b, 1);
	return (-1);
}

/**
 * Function is used during push from B to A.
 * Rotates both stack_a and stack_b in the reverse direction ↓.
 *
 * 1. Reverse rotate ↓ stack_a & stack_b if
 * 	  the number on the top of stack_b != push_number
 * 	  && the push_number can't go on top
 * 2. Reverse rotate ↓ stack_b until the number
 * 	  on the top of stack_b == push_number
 * 3. Reverse rotate ↓ stack_a until the push_number can go on top
 * 4. Push number from stack_b to stack_a.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @param int nbr_push
 * @return int -1
*/
int	ft_apply_b_rrarrb(t_stack **stack_a, t_stack **stack_b, int nbr_push)
{
	while ((*stack_b)->nbr != nbr_push && ft_find_pos_a(*stack_a, nbr_push) > 0)
		ft_rotate_rrr(stack_a, stack_b, 1);
	while ((*stack_b)->nbr != nbr_push)
		ft_rotate_rb(stack_b, 1);
	while (ft_find_pos_a(*stack_a, nbr_push) > 0)
		ft_rotate_ra(stack_a, 1);
	ft_push_a(stack_a, stack_b, 1);
	return (-1);
}

/**
 * Function is used during push from B to A.
 * Rotate stack_b in correct direction ↑.
 * Rotate stack_a in reverse direction ↓.
 *
 * 1. Rotate ↑ stack_b until the number
 * 	  on the top of stack_b == push_number.
 * 2. Reverse rotate ↓ stack_a until the push_number can go on top.
 * 3. Push number from stack_b to stack_a.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @param int nbr_push
 * @return int -1
*/
int	ft_apply_b_rrarb(t_stack **stack_a, t_stack **stack_b, int nbr_push)
{
	while ((*stack_b)->nbr != nbr_push)
		ft_rotate_b(stack_b, 1);
	while (ft_find_pos_a(*stack_a, nbr_push) > 0)
		ft_rotate_ra(stack_a, 1);
	ft_push_a(stack_a, stack_b, 1);
	return (-1);
}

/**
 * Function is used during push from B to A.
 * Rotate stack_b in reverse direction ↑.
 * Rotate stack_a in correct direction ↓.
 *
 * 1. Reverse rotate ↓ stack_b until the number
 * 	  on the top of stack_b == push_number.
 * 2. Rotate ↑ stack_a until the push_number can go on top.
 * 3. Push number from stack_a to stack_b.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @param int nbr_push
 * @return int -1
*/
int	ft_apply_b_rarrb(t_stack **stack_a, t_stack **stack_b, int nbr_push)
{
	while ((*stack_b)->nbr != nbr_push)
		ft_rotate_rb(stack_b, 1);
	while (ft_find_pos_a(*stack_a, nbr_push) > 0)
		ft_rotate_a(stack_a, 1);
	ft_push_a(stack_a, stack_b, 1);
	return (-1);
}
