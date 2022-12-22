/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 09:12:12 by synicole          #+#    #+#             */
/*   Updated: 2022/12/22 09:12:18 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
 * 1. Check if the number of input(s) is less than 2.
 * 2. Check if the number of input(s) is equal to 2.
 *    If YES, it means it is a string.
 *    Call another function <ft_sub_check>.
 * 3. Check if the number of input(s) is greater than 2.
 * 	  If YES, list the arguments.
 *
 * @return t_stack
*/
t_stack	*ft_check(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (argc < 2)
		ft_error();
	if (argc == 2)
		a = ft_sub_check(argv);
	else
	{
		while (i < argc)
		{
			j = ft_atoi2(argv[i]);
			ft_stack_add_back(&a, ft_stack_create(j));
			i++;
		}
	}
	return (a);
}

/*
 * Take the string and split the numbers to create separated integer number.
 *
 * @return t_stack
*/
t_stack	*ft_sub_check(char **argv)
{
	t_stack	*a;
	char	**arg;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	arg = ft_split(argv[1], ' ');
	while (arg[i])
	{
		j = ft_atoi2(arg[i]);
		ft_stack_add_back(&a, ft_stack_create(j));
		i++;
	}
	ft_free_str(arg);
	free(arg);
	return (a);
}

/*
 * A custom atoi.
 *
 * @return int
*/
int	ft_atoi2(const char *str)
{
	int				sign;
	long long int	number;

	number = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		if (!ft_isdigit(*str))
			ft_error();
		number = number * 10 + (*str - '0');
		str++;
	}
	if (number > 2147483647 || number < -2147483648)
		ft_error();
	return ((int) number * sign);
}

/*
 * Free the quoted string.
 *
 * @return void
*/
void	ft_free_str(char **lst)
{
	char	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = *lst;
		lst++;
		free(tmp);
	}
	*lst = NULL;
}
