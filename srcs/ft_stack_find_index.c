/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_find_index.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:14:06 by synicole          #+#    #+#             */
/*   Updated: 2023/01/04 11:14:08 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * TODO
 * Find index of number in the stack.
 *
 * @param t_stack *stack
 * @param int nbr
 * @return int index
*/
int	ft_stack_find_index(t_stack *stack, int nbr)
{
	int		index;

	index = 0;
	while (stack->nbr != nbr)
	{
		index++;
		stack = stack->next;
	}
	return (index);
}
