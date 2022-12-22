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

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	a = ft_check(argc, argv);
	if (!a)
	{
		ft_stack_clear(&a);
		ft_error();
	}
	return (0);
}
