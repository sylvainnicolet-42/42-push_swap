/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:01:24 by synicole          #+#    #+#             */
/*   Updated: 2022/12/23 17:01:25 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * TODO
 * Sort the last three elements in the stack.
 *
 * If min number is the first element
 * ... 1 / 3 / 2
 *
 * If max number is the first element
 * ...
 *
 * Else
 * ...
 *
 * @param t_stack **stack
 * @return void
 */
void	ft_sort_last_three(t_stack **stack)
{
	(void) stack;
	if (ft_stack_get_min(*stack) == (*stack)->nbr)
	{
		ft_swap_a(stack);
		ft_rotate_a(stack);
	}
//	else if (ft_max(*stack) == (*stack)->nbr)
//	{
//		ft_ra(stack, 0);
//		if (!ft_checksorted(*stack))
//			ft_sa(stack, 0);
//	}
//	else
//	{
//		if (ft_find_index(*stack, ft_max(*stack)) == 1)
//			ft_rra(stack, 0);
//		else
//			ft_sa(stack, 0);
//	}
}
