/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:44:34 by synicole          #+#    #+#             */
/*   Updated: 2022/11/29 20:44:36 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * Shift up all elements of stack a by 1.
 * The first element becomes the last one.
 *
 * @param t_stack **stack_a
 * @param int show
 *
 * @return void
*/
void	ft_rotate_a(t_stack **stack_a, int show)
{
	t_stack	*tmp;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = NULL;
	ft_stack_get_last(*stack_a)->next = tmp;
	if (show)
		write(1, "ra\n", 3);
}
