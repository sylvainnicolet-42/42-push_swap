/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_ss.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:31:52 by synicole          #+#    #+#             */
/*   Updated: 2022/11/29 20:31:55 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * sa and sb at the same time.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 *
 * @return void
*/
void	ft_swap_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap_a(stack_a, 0);
	ft_swap_b(stack_b, 0);
	write(1, "ss\n", 3);
}
