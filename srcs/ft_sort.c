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
 *
 * 1. Push all element in stack_a to the stack_b
 * 2. Push back elements from stack_b until stack_b is empty
 *
 * @param t_stack **stack_a
 * @return void
*/
void	ft_sort(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	ft_sort_b(stack_a, &stack_b);
	ft_sort_a(stack_a, &stack_b);
}
