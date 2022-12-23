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

	// TODO Don't forget to free stack_b
	stack_b = NULL;
	ft_sort_b(stack_a, &stack_b);
}
