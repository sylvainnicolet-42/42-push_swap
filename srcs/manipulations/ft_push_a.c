/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:44:02 by synicole          #+#    #+#             */
/*   Updated: 2022/11/29 20:44:04 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * Take the first element at the top of b and put it at the top of a.
 * Do nothing if b is empty.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 *
 * @return void
*/
void	ft_push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (!*stack_b)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_b);
	*stack_b = (*stack_a)->next;
	(*stack_a)->next = tmp;
	write(1, "pa\n", 3);
}
