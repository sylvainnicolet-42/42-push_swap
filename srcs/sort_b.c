/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:00:46 by synicole          #+#    #+#             */
/*   Updated: 2022/12/23 14:00:48 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * Push all element in stack_a to the stack_b,
 * until three elements are left in stack_a.
 *
 * When three elements are left,
 * it calls the function <ft_sort_three> to sort left
 * elements in stack_a.
 *
 * While pushing, it makes sure if
 * the stack_b is sorted.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @return void
*/
void	ft_sort_b(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stack_size(*stack_a) > 3 && !ft_check_sorted(*stack_a))
		ft_push_b(stack_a, stack_b);
	if (ft_stack_size(*stack_a) > 3 && !ft_check_sorted(*stack_a))
		ft_push_b(stack_a, stack_b);
	if (ft_stack_size(*stack_a) > 3 && !ft_check_sorted(*stack_a))
		ft_sort_b_until_3(stack_a, stack_b);
	if (!ft_check_sorted(*stack_a))
		ft_sort_last_three(stack_a);
}

/**
 * TODO
 * Sort and push stacks until 3 members left behind.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @return void
*/
void	ft_sort_b_until_3(t_stack **stack_a, t_stack **stack_b)
{
	int		i;

	while (ft_stack_size(*stack_a) > 3 && !ft_check_sorted(*stack_a))
	{
		i = ft_best_rotations_ab(*stack_a, *stack_b);
	}
}
