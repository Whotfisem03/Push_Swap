/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:41:46 by engo              #+#    #+#             */
/*   Updated: 2022/09/26 15:01:13 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	push_all_a(char **av, t_dlist *stack_a)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (check_arg(av))
			return (1);
		push_back_dlist(stack_a, ft_atol(av[i]));
		i++;
	}
	return (0);
}

int	is_already_sorted(t_dlist *lst)
{
	t_node	*tmp;

	tmp = lst->begin;
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_stack	all;
	(void) ac;

	all.stack_a = new_lst();
	all.stack_b = new_lst();
	if (push_all_a(av, all.stack_a))
		return (-1);
	if (all.stack_a == NULL)
		return (-1);
	if (is_already_sorted(all.stack_a))
		return (1);
	if (ac == 3)
		two_sort(all.stack_a);
	printlist(all.stack_a);
}
