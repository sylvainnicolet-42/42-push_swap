/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:56:32 by synicole          #+#    #+#             */
/*   Updated: 2022/11/29 13:56:40 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	(void) argc;
	(void ) argv;
	push_a();
	push_b();
	rotate_a();
	rotate_b();
	rotate_ra();
	rotate_rb();
	rotate_rr();
	rotate_rrr();
	swap_a();
	swap_b();
	swap_ss();
	return (0);
}
