/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_rb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:46:20 by synicole          #+#    #+#             */
/*   Updated: 2022/11/29 20:46:22 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * Shift down all elements of stack b by 1.
 * The last element becomes the first one.
 *
 * @param t_stack **stack_b
 * @param int show
 *
 * @return void
*/
void	ft_rotate_rb(t_stack **stack_b, int show)
{
	t_stack	*last;
	t_stack	*before_last;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	last = ft_stack_get_last(*stack_b);
	before_last = ft_stack_get_before_last(*stack_b);
	before_last->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	if (show)
		write(1, "rrb\n", 4);
}
