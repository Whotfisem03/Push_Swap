/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:23:53 by engo              #+#    #+#             */
/*   Updated: 2022/10/03 16:43:11 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	printlist(t_dlist *str)
{
	t_node	*element;

	if (!str)
		return ;
	element = str->begin;
	while (element)
	{
		printf("%d\n", element->value);
		element = element->next;
	}
}