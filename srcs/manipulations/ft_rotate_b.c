/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:44:43 by synicole          #+#    #+#             */
/*   Updated: 2022/11/29 20:44:45 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * Shift up all elements of stack b by 1.
 * The first element becomes the last one.
 *
 * @param t_stack **stack_b
 * @param int show
 *
 * @return void
*/
void	ft_rotate_b(t_stack **stack_b, int show)
{
	t_stack	*tmp;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = NULL;
	ft_stack_get_last(*stack_b)->next = tmp;
	if (show)
		write(1, "rb\n", 3);
}
