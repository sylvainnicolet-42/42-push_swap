/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:36:44 by synicole          #+#    #+#             */
/*   Updated: 2023/01/04 10:36:46 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * TODO Understand the function
 * Function is used during push from A to B.
 * Calculate the required amount of rotation.
 *
 * 1. Rotation = position of the push_number in the stack_b .
 * 2. If position < index of push_number in stack_a
 * 	  Rotation = index of push_number in stack_a
 *
 * push_number: 5 -> 10/7/4/3/1
 * position: 2
 *
 * @param t_stack *stack_a
 * @param t_stack *stack_b
 * @param int nbr_push
 * @return int nb_rotation
*/
int	ft_solver_b_rarb(t_stack *stack_a, t_stack *stack_b, int nbr_push)
{
	int	rot;

	rot = ft_find_pos_b(stack_b, nbr_push);
	if (rot < ft_stack_find_index(stack_a, nbr_push))
		rot = ft_stack_find_index(stack_a, nbr_push);
	return (rot);
}

/**
 * TODO Understand the function
 * Calculate the required amount of rotation.
 * Case rra + rrb.
 *
 * @param t_stack *stack_a
 * @param t_stack *stack_b
 * @param int nbr_push
 * @return int nb_rotation
 *
*/
int	ft_solver_b_rrarrb(t_stack *stack_a, t_stack *stack_b, int nbr_push)
{
	int	rot;

	rot = 0;
	if (ft_find_pos_b(stack_b, nbr_push))
		rot = ft_stack_size(stack_b) - ft_find_pos_b(stack_b, nbr_push);
	if ((rot < (ft_stack_size(stack_a)
				- ft_stack_find_index(stack_a, nbr_push)))
		&& ft_stack_find_index(stack_a, nbr_push))
		rot = ft_stack_size(stack_a) - ft_stack_find_index(stack_a, nbr_push);
	return (rot);
}

/**
 * TODO Understand the function
 * Calculate the required amount of rotation.
 * Case rra + rb.
 *
 * @param t_stack *stack_a
 * @param t_stack *stack_b
 * @param int nbr_push
 * @return int nb_rotation
 *
*/
int	ft_solver_b_rrarb(t_stack *stack_a, t_stack *stack_b, int nbr_push)
{
	int	rot;

	rot = 0;
	if (ft_stack_find_index(stack_a, nbr_push))
		rot = ft_stack_size(stack_a) - ft_stack_find_index(stack_a, nbr_push);
	rot = ft_find_pos_b(stack_b, nbr_push) + rot;
	return (rot);
}

/**
 * TODO Understand the function
 * Calculate the required amount of rotation.
 * Case ra + rrb.
 *
 * @param t_stack *stack_a
 * @param t_stack *stack_b
 * @param int nbr_push
 * @return int nb_rotation
 *
*/
int	ft_solver_b_rarrb(t_stack *stack_a, t_stack *stack_b, int nbr_push)
{
	int	rot;

	rot = 0;
	if (ft_find_pos_b(stack_b, nbr_push))
		rot = ft_stack_size(stack_b) - ft_find_pos_b(stack_b, nbr_push);
	rot = ft_stack_find_index(stack_a, nbr_push) + rot;
	return (rot);
}
