/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_rrr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:46:38 by synicole          #+#    #+#             */
/*   Updated: 2022/11/29 20:46:40 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * rra and rrb at the same time.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 *
 * @return void
*/
void	ft_rotate_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rotate_ra(stack_a, 0);
	ft_rotate_rb(stack_b, 0);
	write(1, "rrr\n", 4);
}
