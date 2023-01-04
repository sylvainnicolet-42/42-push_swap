/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
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
 * Calculate the required amount of rotation.
 * Case ra + rb.
 *
 * @param t_stack *src
 * @param t_stack *dst
 * @param int nbr_push
 * @return int nb_rotation
*/
int	ft_solver_rarb(t_stack *src, t_stack *dst, int nbr_push)
{
	int	rot;

	rot = ft_solver_find_pos(dst, nbr_push);
	if (rot < ft_stack_find_index(src, nbr_push))
		rot = ft_stack_find_index(src, nbr_push);
	return (rot);
}

/**
 * TODO Understand the function
 * Calculate the required amount of rotation.
 * Case rra + rrb.
 *
 * @param t_stack *src
 * @param t_stack *dst
 * @param int nbr_push
 * @return int nb_rotation
 *
*/
int	ft_solver_rrarrb(t_stack *src, t_stack *dst, int nbr_push)
{
	int	rot;

	rot = 0;
	if (ft_solver_find_pos(dst, nbr_push))
		rot = ft_stack_size(dst) - ft_solver_find_pos(dst, nbr_push);
	if ((rot < (ft_stack_size(src) - ft_stack_find_index(src, nbr_push)))
		&& ft_stack_find_index(src, nbr_push))
		rot = ft_stack_size(src) - ft_stack_find_index(src, nbr_push);
	return (rot);
}

/**
 * TODO Understand the function
 * Calculate the required amount of rotation.
 * Case rra + rb.
 *
 * @param t_stack *src
 * @param t_stack *dst
 * @param int nbr_push
 * @return int nb_rotation
 *
*/
int	ft_solver_rrarb(t_stack *src, t_stack *dst, int nbr_push)
{
	int	rot;

	rot = 0;
	if (ft_stack_find_index(src, nbr_push))
		rot = ft_stack_size(src) - ft_stack_find_index(src, nbr_push);
	rot = ft_stack_find_index(dst, nbr_push) + rot;
	return (rot);
}

/**
 * TODO Understand the function
 * Calculate the required amount of rotation.
 * Case ra + rrb.
 *
 * @param t_stack *src
 * @param t_stack *dst
 * @param int nbr_push
 * @return int nb_rotation
 *
*/
int	ft_solver_rarrb(t_stack *src, t_stack *dst, int nbr_push)
{
	int	rot;

	rot = 0;
	if (ft_solver_find_pos(dst, nbr_push))
		rot = ft_stack_size(dst) - ft_solver_find_pos(dst, nbr_push);
	rot = ft_stack_find_index(src, nbr_push) + rot;
	return (rot);
}
