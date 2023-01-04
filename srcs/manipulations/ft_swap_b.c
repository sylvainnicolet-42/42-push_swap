/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:30:00 by synicole          #+#    #+#             */
/*   Updated: 2022/11/29 20:30:02 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * Swap the first 2 elements at the top of stack b.
 * Do nothing if there is only one or no element.
 *
 * @param t_stack **stack_b
 * @param int show
 *
 * @return void
*/
void	ft_swap_b(t_stack **stack_b, int show)
{
	t_stack	*tmp;

	if (!stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_b)->next;
	(*stack_b)->next = tmp;
	if (show)
		write(1, "sb\n", 3);
}
