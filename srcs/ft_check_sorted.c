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

/*
 * Check if the stack is sorted.
 *
 * @return void
*/
int	ft_check_sorted(t_stack *stack_a)
{
	long	number;

	number = stack_a->nbr;
	while (stack_a)
	{
		if (number > stack_a->nbr)
			return (0);
		number = stack_a->nbr;
		stack_a = stack_a->next;
	}
	return (1);
}
