/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:31:34 by engo              #+#    #+#             */
/*   Updated: 2022/09/23 14:09:10 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_dlist *stack_a)
{
	int	tmp;

	tmp = stack_a->begin->value;
	pop_front_dlist(stack_a);
	push_back_dlist(stack_a, tmp);
	ft_putstr_fd("ra\n", 0);
}

void	rb(t_dlist *stack_b)
{
	int	tmp;

	tmp = stack_b->begin->value;
	pop_front_dlist(stack_b);
	push_back_dlist(stack_b, tmp);
	ft_putstr_fd("rb\n", 0);
}

void	rr(t_dlist *stack_a, t_dlist *stack_b)
{
	int	tmp;

	tmp = stack_a->begin->value;
	pop_front_dlist(stack_a);
	push_back_dlist(stack_a, tmp);
	ft_putstr_fd("ra\n", 0);
	tmp = stack_b->begin->value;
	pop_front_dlist(stack_b);
	push_back_dlist(stack_b, tmp);
	ft_putstr_fd("rb\n", 0);
}