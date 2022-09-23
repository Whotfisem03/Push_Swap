/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:54:57 by engo              #+#    #+#             */
/*   Updated: 2022/09/22 14:30:14 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_dlist *stack_a, t_dlist *stack_b)
{
	if (stack_b->len == 0)
		return ;
	push_front_dlist(stack_a, stack_b->begin->value);
	pop_front_dlist(stack_b);
	ft_putstr_fd("pa\n", 0);
}

void	pb(t_dlist *stack_a, t_dlist *stack_b)
{
	if (stack_a->len == 0)
		return ;
	push_front_dlist(stack_b, stack_a->begin->value);
	pop_front_dlist(stack_a);
	ft_putstr_fd("pb\n", 0);
}