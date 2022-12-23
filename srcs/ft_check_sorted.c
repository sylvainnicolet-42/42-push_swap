/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:31:04 by synicole          #+#    #+#             */
/*   Updated: 2022/12/22 17:31:05 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * Check if the stack is sorted.
 *
 * @param t_stack *stack
 * @return void
*/
int	ft_check_sorted(t_stack *stack)
{
	long	number;

	number = stack->nbr;
	while (stack)
	{
		if (number > stack->nbr)
			return (0);
		number = stack->nbr;
		stack = stack->next;
	}
	return (1);
}
