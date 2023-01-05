/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:28:43 by synicole          #+#    #+#             */
/*   Updated: 2023/01/04 14:28:45 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * TODO Understand the function
 * Rotates both stack_a and stack_b in the same direction as required amount.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @param int nbr_push
 * @param char stack_src
 * @return int -1
*/
int	ft_apply_rarb(t_stack **stack_a, t_stack **stack_b, int nbr_push, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->nbr != nbr_push && ft_find_pos_b(*stack_b, nbr_push) > 0)
			ft_rotate_rr(stack_a, stack_b);
		while ((*stack_a)->nbr != nbr_push)
			ft_rotate_a(stack_a, 1);
		while (ft_find_pos_b(*stack_b, nbr_push) > 0)
			ft_rotate_b(stack_b, 1);
		ft_push_b(stack_a, stack_b);
	}
	else
	{
		while ((*stack_b)->nbr != nbr_push && ft_find_pos_a(*stack_a, nbr_push) > 0)
			ft_rotate_rr(stack_a, stack_b);
		while ((*stack_b)->nbr != nbr_push)
			ft_rotate_b(stack_b, 1);
		while (ft_find_pos_a(*stack_a, nbr_push) > 0)
			ft_rotate_a(stack_a, 1);
		ft_push_a(stack_a, stack_b);
	}
	return (-1);
}

/**
 * TODO Understand the function
 * Rotates both stack_a and stack_b in the reverse direction as required amount.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @param int nbr_push
 * @param char stack_src
 * @return int -1
*/
int	ft_apply_rrarrb(t_stack **stack_a, t_stack **stack_b, int nbr_push, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->nbr != nbr_push && ft_find_pos_b(*stack_b, nbr_push) > 0)
			ft_rotate_rrr(stack_a, stack_b);
		while ((*stack_a)->nbr != nbr_push)
			ft_rotate_ra(stack_a, 1);
		while (ft_find_pos_b(*stack_b, nbr_push) > 0)
			ft_rotate_rb(stack_b, 1);
		ft_push_b(stack_a, stack_b);
	}
	else
	{
		while ((*stack_b)->nbr != nbr_push && ft_find_pos_a(*stack_a, nbr_push) > 0)
			ft_rotate_rrr(stack_a, stack_b);
		while ((*stack_b)->nbr != nbr_push)
			ft_rotate_rb(stack_b, 1);
		while (ft_find_pos_a(*stack_a, nbr_push) > 0)
			ft_rotate_ra(stack_a, 1);
		ft_push_a(stack_a, stack_b);
	}
	return (-1);
}

/**
 * TODO Understand the function
 * Rotate stack_a in reverse direction,
 * stack_b in opposite direction as required amount.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @param int nbr_push
 * @param char stack_src
 * @return int -1
*/
int	ft_apply_rrarb(t_stack **stack_a, t_stack **stack_b, int nbr_push, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->nbr != nbr_push)
			ft_rotate_ra(stack_a, 1);
		while (ft_find_pos_b(*stack_b, nbr_push) > 0)
			ft_rotate_b(stack_b, 1);
		ft_push_b(stack_a, stack_b);
	}
	else
	{
		while (ft_find_pos_a(*stack_a, nbr_push) > 0)
			ft_rotate_ra(stack_a, 1);
		while ((*stack_b)->nbr != nbr_push)
			ft_rotate_b(stack_b, 1);
		ft_push_a(stack_a, stack_b);
	}
	return (-1);
}

/**
 * TODO Understand the function
 * Rotate stack_b in reverse direction,
 * stack_a in opposite direction as required amount.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @param int nbr_push
 * @param char stack_src
 * @return int -1
*/
int	ft_apply_rarrb(t_stack **stack_a, t_stack **stack_b, int nbr_push, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->nbr != nbr_push)
			ft_rotate_a(stack_a, 1);
		while (ft_find_pos_b(*stack_b, nbr_push) > 0)
			ft_rotate_rb(stack_b, 1);
		ft_push_b(stack_a, stack_b);
	}
	else
	{
		while (ft_find_pos_a(*stack_a, nbr_push) > 0)
			ft_rotate_a(stack_a, 1);
		while ((*stack_b)->nbr != nbr_push)
			ft_rotate_rb(stack_b, 1);
		ft_push_a(stack_a, stack_b);
	}
	return (-1);
}
