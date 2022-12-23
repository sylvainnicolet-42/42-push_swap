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
	t_stack	*stack_a;

	stack_a = ft_check(argc, argv);
	if (!stack_a || ft_check_dup(stack_a))
	{
		ft_stack_clear(&stack_a);
		ft_error();
	}
	if (!ft_check_sorted(stack_a))
	{
		if (ft_stack_size(stack_a) == 2)
			ft_swap_a(stack_a);
		else
			printf("size = 2\n");
	}
	ft_stack_clear(&stack_a);
	return (0);
}
