/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:47:05 by synicole          #+#    #+#             */
/*   Updated: 2023/01/12 11:47:06 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	char	*line;

	if (argc < 2)
		return (0);
	stack_a = ft_check(argc, argv);
	if (!stack_a || ft_check_dup(stack_a))
	{
		ft_stack_clear(&stack_a);
		ft_error();
	}
	line = get_next_line(0);
	if (!line && !ft_check_sorted(stack_a))
		write(1, "KO\n", 3);
	else if (!line && ft_check_sorted(stack_a))
		write(1, "OK\n", 3);
	else
		ft_checker(&stack_a, line);
	ft_stack_clear(&stack_a);
	return (0);
}

/**
 * Checks the validity of the commands and stack.
 *
 * 1. Check commands line by line
 * 2. If stack_b is not empty, print "KO"
 * 3. If stack_a is not sorted, print "KO"
 *
 * @param t_stack **stack_a
 * @param char *line
 * @return void
*/
void	ft_checker(t_stack **stack_a, char *line)
{
	t_stack	*stack_b;
	char	*tmp;

	stack_b = NULL;
	while (line && *line != '\n')
	{
		tmp = line;
		line = ft_check_line(stack_a, &stack_b, line);
		free(tmp);
	}
	if (stack_b)
	{
		ft_stack_clear(&stack_b);
		write(1, "KO\n", 3);
	}
	else if (!ft_check_sorted(*stack_a))
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	free(line);
}

/**
 * Read the line and check if the command is valid.
 * If it is, execute the command.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @param char *line
 * @return char *next_line
*/
char	*ft_check_line(t_stack **stack_a, t_stack **stack_b, char *line)
{
	if (line[0] == 's' && line[1] == 'a' && line[2] == '\n')
		ft_swap_a(stack_a, 0);
	else if (line[0] == 's' && line[1] == 'b' && line[2] == '\n')
		ft_swap_b(stack_b, 0);
	else if (line[0] == 'p' && line[1] == 'a' && line[2] == '\n')
		ft_push_a(stack_a, stack_b, 0);
	else if (line[0] == 'p' && line[1] == 'b' && line[2] == '\n')
		ft_push_b(stack_a, stack_b, 0);
	else if (line[0] == 'r' && line[1] == 'a' && line[2] == '\n')
		ft_rotate_a(stack_a, 0);
	else if (line[0] == 'r' && line[1] == 'b' && line[2] == '\n')
		ft_rotate_b(stack_b, 0);
	else if (line[0] == 'r' && line[1] == 'r' && line[3] == '\n')
		ft_check_line_ext(stack_a, stack_b, line);
	else if (line[0] == 'r' && line[1] == 'r' && line[2] == '\n')
		ft_rotate_rr(stack_a, stack_b, 0);
	else if (line[0] == 's' && line[1] == 's' && line[2] == '\n')
		ft_swap_ss(stack_a, stack_b, 0);
	else
		ft_error();
	return (get_next_line(0));
}

/**
 * Extended the function ft_check_line.
 *
 * @param t_stack **stack_a
 * @param t_stack **stack_b
 * @param char *line
 * @return void
*/
void	ft_check_line_ext(t_stack **stack_a, t_stack **stack_b, char *line)
{
	if (line[2] == 'a')
		ft_rotate_ra(stack_a, 0);
	else if (line[2] == 'b')
		ft_rotate_rb(stack_b, 0);
	else if (line[2] == 'r')
		ft_rotate_rrr(stack_a, stack_b, 0);
}
