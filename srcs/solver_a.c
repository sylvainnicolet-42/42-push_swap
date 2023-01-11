/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:47:30 by synicole          #+#    #+#             */
/*   Updated: 2023/01/04 20:47:33 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * TODO Understand the function
 * Calculate the required amount of rotation.
 * Case ra + rb.
 *
 * @param t_stack *stack_a
 * @param t_stack *stack_b
 * @param int nbr_push
 * @return int nb_rotation
*/
int	ft_solver_a_rarb(t_stack *stack_a, t_stack *stack_b, int nbr_push)
{
	int	i;

	i = ft_find_pos_a(stack_a, nbr_push);
	if (i < ft_stack_find_index(stack_b, nbr_push))
		i = ft_stack_find_index(stack_b, nbr_push);
	return (i);
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
int	ft_solver_a_rrarrb(t_stack *stack_a, t_stack *stack_b, int nbr_push)
{
	int	i;

	i = 0;
	if (ft_find_pos_a(stack_a, nbr_push))
		i = ft_stack_size(stack_a) - ft_find_pos_a(stack_a, nbr_push);
	if ((i < (ft_stack_size(stack_b) - ft_stack_find_index(stack_b, nbr_push)))
		&& ft_stack_find_index(stack_b, nbr_push))
		i = ft_stack_size(stack_b) - ft_stack_find_index(stack_b, nbr_push);
	return (i);
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
int	ft_solver_a_rrarb(t_stack *stack_a, t_stack *stack_b, int nbr_push)
{
	int	i;

	i = 0;
	if (ft_find_pos_a(stack_a, nbr_push))
		i = ft_stack_size(stack_a) - ft_find_pos_a(stack_a, nbr_push);
	i = ft_stack_find_index(stack_b, nbr_push) + i;
	return (i);
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
int	ft_solver_a_rarrb(t_stack *stack_a, t_stack *stack_b, int nbr_push)
{
	int	i;

	i = 0;
	if (ft_stack_find_index(stack_b, nbr_push))
		i = ft_stack_size(stack_b) - ft_stack_find_index(stack_b, nbr_push);
	i = ft_find_pos_a(stack_a, nbr_push) + i;
	return (i);
}
