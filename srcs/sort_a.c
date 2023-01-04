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

// This function is pushing back the elements from stack_b
// to stack_a until stack_b is empty.

/**
 * Push back elements from stack_b until stack_b is empty
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @return void
*/
void	ft_sort_a(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_best_rotations_to_a(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_solver_a_rarb(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rarb(stack_a, stack_b, tmp->nbr, 'b');
			else if (i == ft_solver_a_rarrb(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->nbr, 'b');
			else if (i == ft_solver_a_rrarrb(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->nbr, 'b');
			else if (i == ft_solver_a_rrarb(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->nbr, 'b');
			else
				tmp = tmp->next;
		}
	}
}

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
