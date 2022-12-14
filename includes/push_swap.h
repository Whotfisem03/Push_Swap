/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>    	            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:09:25 by engo              #+#    #+#             */
/*   Updated: 2022/10/07 15:57:15 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <stdint.h>
# include <stdlib.h>
# include "../LIBFT/libft.h"

typedef struct s_node
{
	int				value;
	int				position;
	int				index;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	int				total_cost;
	struct s_node	*next;
	struct s_node	*back;
}				t_node;

typedef struct s_dlist
{
	int				len;
	struct s_node	*begin;
	struct s_node	*end;	
}				t_dlist;

typedef struct s_stack
{
	t_dlist	*stack_a;
	t_dlist	*stack_b;
}				t_stack;

t_node	*pop_back_dlist(t_dlist *l);
t_node	*pop_front_dlist(t_dlist *lst);
void	push_back_dlist(t_dlist *lst, t_node *element);
void	push_front_dlist(t_dlist *lst, t_node *element);

t_dlist	*new_lst(void);
int		is_empty_list(t_dlist *l);
void	free_list(t_dlist *la);

void	sa(t_dlist *stack_a, t_dlist *stack_b);
void	sb(t_dlist *stack_a, t_dlist *stack_b);
void	ss(t_dlist *stack_a, t_dlist *stack_b);
void	pa(t_dlist *stack_a, t_dlist *stack_b);
void	pb(t_dlist *stack_a, t_dlist *stack_b);
void	ra(t_dlist *stack_a, t_dlist *stack_b);
void	rb(t_dlist *stack_a, t_dlist *stack_b);
void	rr(t_dlist *stack_a, t_dlist *stack_b);
void	rra(t_dlist *stack_a, t_dlist *stack_b);
void	rrb(t_dlist *stack_a, t_dlist *stack_b);
void	rrr(t_dlist *stack_a, t_dlist *stack_b);

int		check_isdigit(char *arg);
int		check_isint(char *arg);
int		check_double(char **str, int i);
int		check_arg(char **tab);
void	check_duplicate(t_dlist *lst, t_dlist *lst_b);
int		is_already_sorted(t_dlist *lst);

int		push_all_a(char **av, t_dlist *stack_a);
void	push_back_list_for_a(t_dlist *l, int x);

void	three_sort(t_dlist *stack_a, t_dlist *stack_b);
void	two_sort(t_dlist *stack_a, t_dlist *stack_b);
void	three_sort_secondpart(t_dlist *stack_a, t_dlist *stack_b);
void	four_sort(t_dlist *stack_a, t_dlist *stack_b);
void	five_sort(t_dlist *stack_a, t_dlist *stack_b);
void	execution(t_dlist *stack_a, t_dlist *stack_b);
void	final_execution(t_node *tmpa, t_node *tmpb, t_dlist *a, t_dlist *b);
void	final(t_dlist *stack_a, t_dlist *stack_b);

t_node	*return_smallest(t_dlist *stack_a);
t_node	*return_biggest(t_dlist *stack_a);
int		biggest(t_dlist *stack_a);
int		smallest_a(t_dlist *stack_a);
void	maj_position(t_dlist *stack_a);
void	assign_index(t_dlist *sa);
void	median_index(int ac, t_dlist *stack_a, t_dlist *stack_b);

void	find_target(t_dlist *stack_a, t_dlist *stack_b);
void	find_cost_b(t_dlist *stack_b);
void	find_cost_a(t_dlist *stack_a);
void	find_total_cost(t_dlist *stack_a, t_dlist *stack_b);

#endif
