/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:00:46 by synicole          #+#    #+#             */
/*   Updated: 2022/12/23 14:00:48 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * Push all element in stack_a to the stack_b,
 * until three elements are left in stack_a.
 *
 * When three elements are left,
 * it calls the function <ft_sort_three> to sort left over
 * elements in stack_a.
 *
 * While pushing, it makes sure if
 * the stack_b is sorted.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * return void
*/
void	ft_sort_b(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stack_size(*stack_a) > 3 && !ft_check_sorted(*stack_a))
		ft_push_b(stack_a, stack_b);
	if (ft_stack_size(*stack_a) > 3 && !ft_check_sorted(*stack_a))
		ft_push_b(stack_a, stack_b);
	if (ft_stack_size(*stack_a) > 3 && !ft_check_sorted(*stack_a))
		printf("TODO Sort b until 3");
	if (!ft_check_sorted(*stack_a))
		printf("TODO Sort 3 a");
}

// This function sort and push stacks until 3 members left behind.
//void	ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b)
//{
//	int		i;
//	t_stack	*tmp;
//
//	while (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
//	{
//		tmp = *stack_a;
//		i = ft_rotate_type_ab(*stack_a, *stack_b);
//		while (i >= 0)
//		{
//			if (i == ft_case_rarb(*stack_a, *stack_b, tmp->nbr))
//				i = ft_apply_rarb(stack_a, stack_b, tmp->nbr, 'a');
//			else if (i == ft_case_rrarrb(*stack_a, *stack_b, tmp->nbr))
//				i = ft_apply_rrarrb(stack_a, stack_b, tmp->nbr, 'a');
//			else if (i == ft_case_rarrb(*stack_a, *stack_b, tmp->nbr))
//				i = ft_apply_rarrb(stack_a, stack_b, tmp->nbr, 'a');
//			else if (i == ft_case_rrarb(*stack_a, *stack_b, tmp->nbr))
//				i = ft_apply_rrarb(stack_a, stack_b, tmp->nbr, 'a');
//			else
//				tmp = tmp->next;
//		}
//	}
//}