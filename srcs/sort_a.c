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
 * Push back elements from stack_b until stack_b is empty
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @return void
*/
void	ft_sort_a(t_stack **stack_a, t_stack **stack_b)
{
	int		rot;
	t_stack	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		rot = ft_best_rotations_to_a(*stack_a, *stack_b);
		while (rot >= 0)
		{
			if (rot == ft_solver_a_rarb(*stack_a, *stack_b, tmp->nbr))
				rot = ft_apply_b_rarb(stack_a, stack_b, tmp->nbr);
			else if (rot == ft_solver_a_rarrb(*stack_a, *stack_b, tmp->nbr))
				rot = ft_apply_b_rarrb(stack_a, stack_b, tmp->nbr);
			else if (rot == ft_solver_a_rrarrb(*stack_a, *stack_b, tmp->nbr))
				rot = ft_apply_b_rrarrb(stack_a, stack_b, tmp->nbr);
			else if (rot == ft_solver_a_rrarb(*stack_a, *stack_b, tmp->nbr))
				rot = ft_apply_b_rrarb(stack_a, stack_b, tmp->nbr);
			else
				tmp = tmp->next;
		}
	}
	ft_bring_small_to_top(stack_a);
}

/**
 * Sort the last three elements in the stack
 *
 * If min number is the first element
 * 1/3/2 -> [sa] -> 3/1/2 -> [ra] -> 1/2/3
 *
 * If max number is the first element
 * 3/1/2 -> [ra ↑] -> 1/2/3
 * 3/2/1 -> [ra ↑] -> 2/1/3 -> [sa] -> 1/2/3
 *
 * Else
 * 2/1/3 -> [sa] -> 1/2/3
 * 2/3/1 -> [rra ↓] -> 1/2/3
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

/**
 * Bring the smallest number of the stack to the top
 * 1. Check position of min number to know the best direction for rotation
 * 2. If position < stack_size - position
 * 	  	Use [ra] ↑
 * 	  Else
 * 	  	Use [rra] ↓
 * 3. Rotate until stack is sorted
 *
 * @param t_stack **stack_a
 * @return void
*/
void	ft_bring_small_to_top(t_stack **stack)
{
	int	pos;

	pos = ft_stack_find_index(*stack, ft_stack_get_min(*stack));
	if (pos < ft_stack_size(*stack) - pos)
	{
		while (!ft_check_sorted(*stack))
			ft_rotate_a(stack, 1);
	}
	else
	{
		while (!ft_check_sorted(*stack))
			ft_rotate_ra(stack, 1);
	}
}
