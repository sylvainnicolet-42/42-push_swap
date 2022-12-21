/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:58:31 by synicole          #+#    #+#             */
/*   Updated: 2022/11/29 13:58:33 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*
 * Libraries
*/
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

/*
 * Structure
*/
typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

/*
 * Manipulations
*/
void	ft_push_a(void);
void	ft_push_b(void);
void	ft_rotate_a(void);
void	ft_rotate_b(void);
void	ft_rotate_ra(void);
void	ft_rotate_rb(void);
void	ft_rotate_rr(void);
void	ft_rotate_rrr(void);
void	ft_swap_a(void);
void	ft_swap_b(void);
void	ft_swap_ss(void);

void	ft_error(void);

#endif