/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver_find_pos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:04:56 by synicole          #+#    #+#             */
/*   Updated: 2023/01/04 11:04:57 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * TODO
 * Find the correct position of the push number in its future stack.
 *
 * @param t_stack *stack
 * @param int nbr_push
 * @return int position
*/
int	ft_solver_find_pos(t_stack *stack, int nbr_push)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (nbr_push > stack->nbr && nbr_push < ft_stack_get_last(stack)->nbr)
		i = 0;
	else if (nbr_push > ft_stack_get_max(stack)
		|| nbr_push < ft_stack_get_min(stack))
		i = ft_stack_find_index(stack, ft_stack_get_max(stack));
	else
	{
		tmp = stack->next;
		while (stack->nbr < nbr_push || tmp->nbr > nbr_push)
		{
			stack = stack->next;
			tmp = stack->next;
			i++;
		}
	}
	return (i);
}
