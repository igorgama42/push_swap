/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:12:26 by igama             #+#    #+#             */
/*   Updated: 2024/04/21 11:38:15 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **list)
{
	int	temp;

	ft_printf("sa\n");
	temp = 0;
	if (*list == NULL || (*list)->next == NULL)
		return ;
	temp = (*list)->next->data;
	(*list)->next->data = (*list)->data;
	(*list)->data = temp;
}

void	sb(t_list **list)
{
	int	temp;

	ft_printf("sb\n");
	temp = 0;
	if (*list == NULL || (*list)->next == NULL)
		return ;
	temp = (*list)->data;
	(*list)->data = (*list)->next->data;
	(*list)->next->data = temp;
}

void	ss(t_list **list_a, t_list **list_b)
{
	int	temp1;
	int	temp2;

	ft_printf("ss\n");
	temp1 = 0;
	temp2 = 0;
	if ((*list_a == NULL || (*list_a)->next == NULL)
		|| *list_b == NULL || (*list_b)->next == NULL)
		temp2 = (*list_a)->data;
	(*list_a)->data = (*list_a)->next->data;
	(*list_a)->next->data = temp1;
	temp2 = (*list_b)->data;
	(*list_b)->data = (*list_b)->next->data;
	(*list_b)->next->data = temp2;
}

void	pa(t_list **list_a, t_list **list_b)
{
	t_list	*removed_node;

	if (!*list_b)
		return ;
	ft_printf("pa\n");
	removed_node = node_remover(list_b);
	add_into_beginning(list_a, removed_node->data, removed_node->index);
	free(removed_node);
}

void	pb(t_list **list_b, t_list **list_a)
{
	t_list	*removed_node;

	if (!*list_a)
		return ;
	ft_printf("pb\n");
	removed_node = node_remover(list_a);
	add_into_beginning(list_b, removed_node->data, removed_node->index);
	free(removed_node);
}
