/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:48:43 by synicole          #+#    #+#             */
/*   Updated: 2022/12/23 13:48:44 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * TODO
 * And finally it makes final sort in stack_a after
 * all values pushed to stack_b, sorted and pushed
 * back to stack_a. Because, even the stack_a is
 * sorted at the end, the minimum number have to
 * at the top of the stack_a. So, it simply brings
 * the smallest number of the stack_a to the top.
 *
 * @param t_stack **stack_a
 * @return void
*/
void	ft_sort(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = NULL;
	ft_sort_b(stack_a, &stack_b);
	ft_sort_a(stack_a, &stack_b);
	i = ft_stack_find_index(*stack_a, ft_stack_get_min(*stack_a));
	if (i < ft_stack_size(*stack_a) - i)
	{
		while ((*stack_a)->nbr != ft_stack_get_min(*stack_a))
			ft_rotate_a(stack_a, 1);
	}
	else
	{
		while ((*stack_a)->nbr != ft_stack_get_min(*stack_a))
			ft_rotate_ra(stack_a, 1);
	}
}
