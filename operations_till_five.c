/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_till_five.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:12:26 by igama             #+#    #+#             */
/*   Updated: 2024/05/03 15:56:03 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	one_to_five(t_list **list_a, t_list **list_b)
{
	int	size_a;

	size_a = ft_stack_size(list_a);
	if (size_a == 1)
		return ;
	else if (size_a == 2)
		sa(list_a);
	else if (size_a == 3 && ft_is_sorted(list_a) == 0)
		op_3(list_a, 0);
	else if (size_a == 4 && ft_is_sorted(list_a) == 0)
		op_4(list_a, list_b);
	else if (size_a == 5 && ft_is_sorted(list_a) == 0)
		op_5(list_a, list_b);
}

void	op_3(t_list **list, int index_mod)
{
	if ((*list)->index == 0 + index_mod)
	{
		if ((*list)->next->index == 2 + index_mod)
		{
			rra(list);
			sa(list);
		}
	}
	else if ((*list)->index == 1 + index_mod)
	{
		if ((*list)->next->index == 2 + index_mod)
			rra(list);
		else
			sa(list);
	}
	else if ((*list)->index == 2 + index_mod)
	{
		ra(list);
		if ((*list)->index == 1 + index_mod)
			sa(list);
	}
}

void	op_4(t_list **list_a, t_list **list_b)
{
	int	size_a;

	size_a = ft_stack_size(list_a);
	if ((*list_a)->index == 1 && (*list_a)->next->index == 0)
		sa(list_a);
	else if ((*list_a)->index == 3)
		ra(list_a);
	if (ft_is_sorted(list_a) == 1)
		return ;
	while (size_a > 3)
	{
		if ((*list_a)->index == 0)
		{
			pb(list_b, list_a);
			size_a--;
		}
		else if ((*list_a)->next->next->next->index == 0)
			rra(list_a);
		else
			ra(list_a);
	}
	op_3(list_a, 1);
	pa(list_a, list_b);
}

void	op_5(t_list **list_a, t_list **list_b)
{
	int	size_a;

	size_a = ft_stack_size(list_a);
	if ((*list_a)->index == 1 && (*list_a)->next->index == 0)
		sa(list_a);
	if (ft_is_sorted(list_a) == 1)
		return ;
	while (size_a > 3)
	{
		if ((*list_a)->index == 0 || (*list_a)->index == 1)
		{
			pb(list_b, list_a);
			size_a--;
		}
		else
			ra(list_a);
	}
	op_3(list_a, 2);
	pa(list_a, list_b);
	pa(list_a, list_b);
	if ((*list_a)->index > (*list_a)->next->index)
		sa(list_a);
}
