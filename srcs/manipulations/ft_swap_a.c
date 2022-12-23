/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:29:10 by synicole          #+#    #+#             */
/*   Updated: 2022/11/29 20:29:14 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * Swap the first 2 elements at the top of stack a.
 * Do nothing if there is only one or no element.
 *
 * @param t_stack *stack
 * @return void
*/
void	ft_swap_a(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack || !stack->next)
		return ;
	tmp = stack;
	stack = stack->next;
	tmp->next = stack->next;
	stack->next = tmp;
	write(1, "sa\n", 3);
}
