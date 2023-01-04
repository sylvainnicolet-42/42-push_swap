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
 * TODO
 * Find the correct position of the push_number in the stack_b
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
		while (stack_b->nbr < nbr_push || tmp->nbr > nbr_push)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			pos++;
		}
	}
	return (pos);
}

/**
 * TODO
 * Find the correct position of the push_number in the stack_a
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
		while (stack_a->nbr > nbr_push || tmp->nbr < nbr_push)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			pos++;
		}
	}
	return (pos);
}
