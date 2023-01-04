/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_best_rotations.c                                :+:      :+:    :+:   */
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
 * to sort the stack.
 *
 * After rotation there is always one push
 * operation is left to do which i embeded to code.
 *
 * Function is used during push from A to B.
 *
 * @param t_stack *src
 * @param t_stack *dst
 * @return int nb_rotation
*/
int	ft_best_rotations(t_stack *src, t_stack *dst)
{
	int		rot;
	t_stack	*tmp;

	tmp = src;
	rot = ft_solver_rarb(src, dst, src->nbr);
	while (tmp)
	{
		if (ft_solver_rrarrb(src, dst, src->nbr) < rot)
			rot = ft_solver_rrarrb(src, dst, src->nbr);
		if (ft_solver_rrarb(src, dst, src->nbr) < rot)
			rot = ft_solver_rrarb(src, dst, src->nbr);
		if (ft_solver_rarrb(src, dst, src->nbr) < rot)
			rot = ft_solver_rarrb(src, dst, src->nbr);
		tmp = tmp->next;
	}
	return (rot);
}
