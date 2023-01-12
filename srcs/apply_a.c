/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:28:43 by synicole          #+#    #+#             */
/*   Updated: 2023/01/04 14:28:45 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * Function is used during push from A to B.
 * Rotates both stack_a and stack_b in the correct direction ↑.
 *
 * 1. Rotate ↑ stack_a & stack_b if
 * 	  the number on the top of stack_a != push_number
 * 	  && the push_number can't go on top.
 * 2. Rotate ↑ stack_a until the number on the top of stack_a == push_number.
 * 3. Rotate ↑ stack_b until the push_number can go on top.
 * 4. Push number from stack_a to stack_b
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @param int nbr_push
 * @return int -1
*/
int	ft_apply_a_rarb(t_stack **stack_a, t_stack **stack_b, int nbr_push)
{
	while ((*stack_a)->nbr != nbr_push && ft_find_pos_b(*stack_b, nbr_push) > 0)
		ft_rotate_rr(stack_a, stack_b, 1);
	while ((*stack_a)->nbr != nbr_push)
		ft_rotate_a(stack_a, 1);
	while (ft_find_pos_b(*stack_b, nbr_push) > 0)
		ft_rotate_b(stack_b, 1);
	ft_push_b(stack_a, stack_b, 1);
	return (-1);
}

/**
 * Function is used during push from A to B.
 * Rotates both stack_a and stack_b in the reverse direction ↓.
 *
 * 1. Reverse rotate ↓ stack_a & stack_b if
 * 	  the number on the top of stack_a != push_number
 * 	  && the push_number can't go on top
 * 2. Reverse rotate ↓ stack_a until the number
 * 	  on the top of stack_a == push_number
 * 3. Reverse rotate ↓ stack_b until the push_number can go on top
 * 4. Push number from stack_a to stack_b.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @param int nbr_push
 * @return int -1
*/
int	ft_apply_a_rrarrb(t_stack **stack_a, t_stack **stack_b, int nbr_push)
{
	while ((*stack_a)->nbr != nbr_push && ft_find_pos_b(*stack_b, nbr_push) > 0)
		ft_rotate_rrr(stack_a, stack_b, 1);
	while ((*stack_a)->nbr != nbr_push)
		ft_rotate_ra(stack_a, 1);
	while (ft_find_pos_b(*stack_b, nbr_push) > 0)
		ft_rotate_rb(stack_b, 1);
	ft_push_b(stack_a, stack_b, 1);
	return (-1);
}

/**
 * Function is used during push from A to B.
 * Rotate stack_a in reverse direction ↓.
 * Rotate stack_b in correct direction ↑.
 *
 * 1. Reverse rotate ↓ stack_a until the number
 * 	  on the top of stack_a == push_number.
 * 2. Rotate ↑ stack_b until the push_number can go on top.
 * 3. Push number from stack_a to stack_b.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @param int nbr_push
 * @return int -1
*/
int	ft_apply_a_rrarb(t_stack **stack_a, t_stack **stack_b, int nbr_push)
{
	while ((*stack_a)->nbr != nbr_push)
		ft_rotate_ra(stack_a, 1);
	while (ft_find_pos_b(*stack_b, nbr_push) > 0)
		ft_rotate_b(stack_b, 1);
	ft_push_b(stack_a, stack_b, 1);
	return (-1);
}

/**
 * Function is used during push from A to B.
 * Rotate stack_a in correct direction ↑.
 * Rotate stack_b in reverse direction ↓.
 *
 * 1. Rotate ↑ stack_a until the number
 * 	  on the top of stack_a == push_number.
 * 2. Reverse rotate ↓ stack_b until the push_number can go on top.
 * 3. Push number from stack_a to stack_b.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @param int nbr_push
 * @return int -1
*/
int	ft_apply_a_rarrb(t_stack **stack_a, t_stack **stack_b, int nbr_push)
{
	while ((*stack_a)->nbr != nbr_push)
		ft_rotate_a(stack_a, 1);
	while (ft_find_pos_b(*stack_b, nbr_push) > 0)
		ft_rotate_rb(stack_b, 1);
	ft_push_b(stack_a, stack_b, 1);
	return (-1);
}
