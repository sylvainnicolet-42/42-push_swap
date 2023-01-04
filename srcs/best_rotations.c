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
 * TODO
 * Calculate and decide which rotation combination is best to use
 * to sort the stack.
 *
 * After rotation there is always one push
 * operation is left to do which i embeded to code.
 *
 * Function is used during push from A to B.
 *
 * @param t_stack *stack_a
 * @param t_stack *stack_b
 * @return int
*/
int	ft_best_rotations_ab(t_stack *stack_a, t_stack *stack_b)
{
	int		i;

	i = ft_solver_a_to_b_rarb(stack_a, stack_b, stack_a->nbr);
	return (i);
}
