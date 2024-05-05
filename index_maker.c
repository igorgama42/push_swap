/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_maker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:12:26 by igama             #+#    #+#             */
/*   Updated: 2023/11/08 16:46:51 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_maker(t_list **list)
{
	t_list	*aux1;
	t_list	*aux2;

	if (!*list)
		return ;
	aux1 = *list;
	while (aux1->next)
	{
		aux2 = aux1->next;
		while (aux2)
		{
			if (aux1->data > aux2->data)
				aux1->index++;
			else
				aux2->index++;
			aux2 = aux2->next;
		}
		aux1 = aux1->next;
	}
}
