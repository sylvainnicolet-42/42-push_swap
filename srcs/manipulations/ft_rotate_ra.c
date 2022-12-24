/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_ra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:46:09 by synicole          #+#    #+#             */
/*   Updated: 2022/11/29 20:46:12 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * Shift down all elements of stack a by 1.
 * The last element becomes the first one.
 *
 * @return void
*/
void	ft_rotate_ra(t_stack **stack_a)
{
	t_stack	*last;
	t_stack	*before_last;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	last = ft_stack_get_last(*stack_a);
	before_last = ft_stack_get_before_last(*stack_a);
	before_last->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	write(1, "rra\n", 4);
}
