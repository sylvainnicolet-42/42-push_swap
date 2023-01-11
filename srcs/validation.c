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

/**
 * 1. Check if the number of input(s) is equal to 2.
 *    If YES, it means it is a string.
 *    Call another function <ft_sub_check>.
 * 2. Check if the number of input(s) is greater than 2.
 * 	  If YES, list the arguments.
 *
 * @param int argc
 * @param char **argv
 * @return t_stack
*/
t_stack	*ft_check(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (argc == 2)
		a = ft_check_sub(argv);
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

/**
 * Take the string and split the numbers to create separated integer number.
 *
 * @param char **argv
 * @return t_stack
*/
t_stack	*ft_check_sub(char **argv)
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

/**
 * A custom atoi.
 *
 * @param const char *str
 * @return int
*/
int	ft_atoi2(const char *str)
{
	int		i;
	int		sign;

	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			if (ft_strlen(str) == 1)
				ft_error();
			sign = -1;
		}
		i++;
	}
	return (ft_atoi2_ext(str, sign, i));
}

/**
 * Extended the custom atoi.
 *
 * @param const char *str
 * @param int sign
 * @param int i
 * @return int
*/
int	ft_atoi2_ext(const char *str, int sign, int i)
{
	long long int	number;

	number = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ft_error();
		number = number * 10 + (str[i] - '0');
		i++;
	}
	if (number * sign > 2147483647 || number * sign < -2147483648)
		ft_error();
	return ((int) number * sign);
}

/**
 * Free the quoted string.
 *
 * @param char **lst
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
