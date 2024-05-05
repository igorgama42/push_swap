/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:44:47 by igama             #+#    #+#             */
/*   Updated: 2024/04/21 12:45:00 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sorted(t_list **list)
{
	t_list		*aux1;
	t_list		*aux2;

	aux1 = *list;
	while (aux1->next)
	{
		aux2 = aux1->next;
		while (aux2)
		{
			if (aux1->data > aux2->data)
				return (0);
			aux2 = aux2->next;
		}
		aux1 = aux1->next;
	}
	return (1);
}

static int	necessary_bits(int size)
{
	int	i;

	i = 0;
	while (size)
	{
		size = size >> 1;
		i++;
	}
	return (i);
}

void	more_than_five(t_list **list_a, t_list **list_b)
{
	int	begin;
	int	bytes;

	bytes = necessary_bits(ft_stack_size(list_a));
	begin = 0;
	while (bytes > 0)
	{
		radix(list_a, list_b, begin);
		bytes--;
		begin++;
	}
	while (ft_stack_size(list_b) > 0)
		pa(list_a, list_b);
}

void	radix(t_list **list_a, t_list **list_b, int dif)
{
	int	size_a;
	int	size_b;

	size_b = ft_stack_size(list_b);
	while (size_b > 0 && (*list_b)->next != NULL)
	{
		if ((((*list_b)->index >> dif & 1) == 1))
			pa(list_a, list_b);
		else
			rb(list_b);
		size_b--;
	}
	size_a = ft_stack_size(list_a);
	while (size_a > 0 && (*list_a)->next != NULL)
	{
		if ((((*list_a)->index >> dif & 1) == 0))
			pb(list_b, list_a);
		else
			ra(list_a);
		size_a--;
	}
}
