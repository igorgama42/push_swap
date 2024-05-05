/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_operations.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:12:26 by igama             #+#    #+#             */
/*   Updated: 2024/04/21 11:30:30 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void	add_into_beginning(t_list **list, int num, int index)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new)
	{
		new->data = num;
		new->index = index;
		new->next = *list;
		*list = new;
	}
	else
		ft_printf("ERROR: MEMORY ALLOCATION FAILED");
}

void	add_into_ending(t_list **list, int num, int index)
{
	t_list	*new;
	t_list	*aux;

	new = malloc(sizeof(t_list));
	if (new)
	{
		new->data = num;
		new->index = index;
		new->next = NULL;
		if (*list == NULL)
			*list = new;
		else
		{
			aux = *list;
			while (aux->next)
				aux = aux->next;
			aux->next = new;
		}
	}
	else
		ft_printf("ERROR: MEMORY ALLOCATION FAILED");
}

void	node_to_ending(t_list **list)
{
	t_list	*aux;
	t_list	*temp;

	temp = *list;
	aux = *list;
	*list = (*list)->next;
	while (aux->next)
		aux = aux->next;
	aux->next = temp;
	temp->next = NULL;
}

void	node_to_beginning(t_list **list)
{
	t_list	*aux;
	t_list	*temp;

	aux = *list;
	while (aux->next->next != NULL)
		aux = aux->next;
	temp = aux->next;
	aux->next = NULL;
	temp->next = *list;
	*list = temp;
}

t_list	*node_remover(t_list **list)
{
	t_list	*temp;

	temp = *list;
	*list = temp->next;
	return (temp);
}
