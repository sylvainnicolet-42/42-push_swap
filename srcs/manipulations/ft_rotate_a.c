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
 * 1/2/3 -> 2/3/1
 *
 * @return void
*/
void	ft_rotate_a(t_stack **stack_a)
{
	t_stack	*tmp;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	// mettre el_1 dans tmp
	tmp = *stack_a;
	//
	*stack_a = ft_stack_get_last(*stack_a);
	tmp->next
	write(1, "ra\n", 3);
}
