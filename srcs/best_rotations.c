/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_rotations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:19:17 by synicole          #+#    #+#             */
/*   Updated: 2023/01/04 10:19:19 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * TODO Maybe use same function for b
 * Calculate and decide which rotation combination is best to use
 * to sort the stack_b.
 *
 * After rotation there is always one push
 * operation is left to do which i embeded to code.
 *
 * @param t_stack *stack_a
 * @param t_stack *stack_b
 * @return int nb_rotation
*/
int	ft_best_rotations_to_b(t_stack *stack_a, t_stack *stack_b)
{
	int		rot;
	t_stack	*tmp;

	tmp = stack_a;
	rot = ft_solver_b_rarb(stack_a, stack_b, stack_a->nbr);
	while (tmp)
	{
		if (rot > ft_solver_b_rrarrb(stack_a, stack_b, stack_a->nbr))
			rot = ft_solver_b_rrarrb(stack_a, stack_b, stack_a->nbr);
		if (rot > ft_solver_b_rrarb(stack_a, stack_b, stack_a->nbr))
			rot = ft_solver_b_rrarb(stack_a, stack_b, stack_a->nbr);
		if (rot > ft_solver_b_rarrb(stack_a, stack_b, stack_a->nbr))
			rot = ft_solver_b_rarrb(stack_a, stack_b, stack_a->nbr);
		tmp = tmp->next;
	}
	return (rot);
}

/**
 * Calculate and decide which rotation combination is best to use
 * to sort the stack_a.
 *
 * After rotation there is always one push
 * operation is left to do which i embeded to code.
 *
 * @param t_stack *stack_a
 * @param t_stack *stack_b
 * @return int nb_rotation
*/
int	ft_best_rotations_to_a(t_stack *stack_a, t_stack *stack_b)
{
	int		rot;
	t_stack	*tmp;

	tmp = stack_b;
	rot = ft_solver_a_rarb(stack_a, stack_b, stack_b->nbr);
	while (tmp)
	{
		if (rot > ft_solver_a_rrarrb(stack_a, stack_b, tmp->nbr))
			rot = ft_solver_a_rrarrb(stack_a, stack_b, tmp->nbr);
		if (rot > ft_solver_a_rrarb(stack_a, stack_b, tmp->nbr))
			rot = ft_solver_a_rrarb(stack_a, stack_b, tmp->nbr);
		if (rot > ft_solver_a_rarrb(stack_a, stack_b, tmp->nbr))
			rot = ft_solver_a_rarrb(stack_a, stack_b, tmp->nbr);
		tmp = tmp->next;
	}
	return (rot);
}
