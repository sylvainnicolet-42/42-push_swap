/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_a_to_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:36:44 by synicole          #+#    #+#             */
/*   Updated: 2023/01/04 10:36:46 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * TODO
 * Calculate the required amount of rotation.
 * Case ra+rb.
 *
 * @param t_stack *stack_a
 * @param t_stack *stack_b
 * return int
*/
int	ft_solver_a_to_b_rarb(t_stack *stack_a, t_stack *stack_b, int nbr_push)
{
	int	nb_rotation;

	nb_rotation = ft_solver_find_pos(stack_b, nbr_push);
	if (nb_rotation < ft_stack_find_index(stack_a, nbr_push))
		nb_rotation = ft_stack_find_index(stack_a, nbr_push);
	return (nb_rotation);
}
