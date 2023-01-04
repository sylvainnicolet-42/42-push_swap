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
 * Sort the last three elements in the stack.
 *
 * If min number is the first element
 * 1/3/2 -> 3/1/2
 *
 * If max number is the first element
 * 3/1/2 or 3/2/1 -> 2/1/3
 *
 * Else
 * 2/1/3 or 2/3/1
 *
 * @param t_stack **stack
 * @return void
 */
void	ft_sort_last_three(t_stack **stack)
{
	(void) stack;
	if (ft_stack_get_min(*stack) == (*stack)->nbr)
	{
		ft_swap_a(stack, 1);
		ft_rotate_a(stack, 1);
	}
	else if (ft_stack_get_max(*stack) == (*stack)->nbr)
	{
		ft_rotate_a(stack, 1);
		if (!ft_check_sorted(*stack))
			ft_swap_a(stack, 1);
	}
	else
	{
		if (ft_stack_get_min(*stack) == (*stack)->next->nbr)
			ft_swap_a(stack, 1);
		else
			ft_rotate_ra(stack, 1);
	}
}
