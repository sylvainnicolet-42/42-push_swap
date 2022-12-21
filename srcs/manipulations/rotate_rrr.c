/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:46:38 by synicole          #+#    #+#             */
/*   Updated: 2022/11/29 20:46:40 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/*
 * rra et rrb en même temps.
 *
 * @return void
*/
void	rotate_rrr(void)
{
	rotate_ra();
	rotate_rb();
}

