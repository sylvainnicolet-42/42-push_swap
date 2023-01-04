/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_rr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:45:09 by synicole          #+#    #+#             */
/*   Updated: 2022/11/29 20:45:11 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * ra and rb at the same time.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 *
 * @return void
*/
void	ft_rotate_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rotate_a(stack_a, 0);
	ft_rotate_b(stack_b, 0);
	write(1, "rr\n", 3);
}
