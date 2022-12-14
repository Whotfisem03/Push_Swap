/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:24:11 by engo              #+#    #+#             */
/*   Updated: 2022/10/19 12:47:06 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	smallest_a(t_dlist *stack_a)
{
	t_node	*tmp;
	int		i;

	i = stack_a->begin->value;
	tmp = stack_a->begin->next;
	while (tmp)
	{
		if (tmp->value < i)
			i = tmp->value;
		tmp = tmp->next;
	}
	return (i);
}

t_node	*return_smallest(t_dlist *stack_a)
{
	t_node	*tmp;

	tmp = stack_a->begin;
	while (smallest_a(stack_a) != tmp->value)
		tmp = tmp->next;
	return (tmp);
}

void	five_sort_secondpart(t_dlist *stack_a, t_dlist *stack_b)
{
	rra(stack_a, stack_b);
	rra(stack_a, stack_b);
	pb(stack_a, stack_b);
}

void	five_sort(t_dlist *stack_a, t_dlist *stack_b)
{
	t_node	*tmp;

	tmp = return_smallest(stack_a);
	if (tmp == stack_a->begin)
		pb(stack_a, stack_b);
	else if (tmp == stack_a->end)
	{
		rra(stack_a, stack_b);
		pb(stack_a, stack_b);
	}
	else if (tmp == stack_a->begin->next)
	{
		sa(stack_a, stack_b);
		pb(stack_a, stack_b);
	}
	else if (tmp == stack_a->end->back->back)
	{
		ra(stack_a, stack_b);
		ra(stack_a, stack_b);
		pb(stack_a, stack_b);
	}
	else if (tmp == stack_a->end->back)
		five_sort_secondpart(stack_a, stack_b);
	four_sort(stack_a, stack_b);
	pa(stack_a, stack_b);
}
