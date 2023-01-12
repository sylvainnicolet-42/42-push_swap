/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:04:56 by synicole          #+#    #+#             */
/*   Updated: 2023/01/04 11:04:57 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * Find the correct position of the push_number in the stack_b
 *
 * 1. Check if the push_number goes on top
 * 2. Check if the push_number is the max_number or min_number
 * 	  Goes before the previous_max_number
 * 3. To stop the loop, the push_number must be between two consecutive numbers
 * 	  push_number: 5 -> 10/7/4/3/1
 *
 * @param t_stack *stack_b
 * @param int nbr_push
 * @return int position
*/
int	ft_find_pos_b(t_stack *stack_b, int nbr_push)
{
	int		pos;
	t_stack	*tmp;

	pos = 1;
	if (nbr_push > stack_b->nbr && nbr_push < ft_stack_get_last(stack_b)->nbr)
		pos = 0;
	else if (nbr_push > ft_stack_get_max(stack_b)
		|| nbr_push < ft_stack_get_min(stack_b))
		pos = ft_stack_find_index(stack_b, ft_stack_get_max(stack_b));
	else
	{
		tmp = stack_b->next;
		while (nbr_push > stack_b->nbr || nbr_push < tmp->nbr)
		{
			stack_b = stack_b->next;
			tmp = tmp->next;
			pos++;
		}
	}
	return (pos);
}

/**
 * Find the correct position of the push_number in the stack_a
 *
 * 1. Check if push_number goes on top
 * 2. Check if push_number is the max_number or min_number
 * 	  Goes before the previous_min_number
 * 3. To stop the loop, the push_number must be between two consecutive numbers
 * 	  push_number: 5 -> 1/3/4/7/10
 *
 * @param t_stack *stack
 * @param int nbr_push
 * @return int position
*/
int	ft_find_pos_a(t_stack *stack_a, int nbr_push)
{
	int		pos;
	t_stack	*tmp;

	pos = 1;
	if (nbr_push < stack_a->nbr && nbr_push > ft_stack_get_last(stack_a)->nbr)
		pos = 0;
	else if (nbr_push > ft_stack_get_max(stack_a)
		|| nbr_push < ft_stack_get_min(stack_a))
		pos = ft_stack_find_index(stack_a, ft_stack_get_min(stack_a));
	else
	{
		tmp = stack_a->next;
		while (nbr_push < stack_a->nbr || nbr_push > tmp->nbr)
		{
			stack_a = stack_a->next;
			tmp = tmp->next;
			pos++;
		}
	}
	return (pos);
}
