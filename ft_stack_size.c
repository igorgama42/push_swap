/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:26:15 by igama             #+#    #+#             */
/*   Updated: 2024/04/21 11:27:12 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_size(t_list **list)
{
	int		size;
	t_list	*aux;

	size = 1;
	aux = *list;
	if (!*list || !list)
		return (0);
	while (aux->next != NULL)
	{
		aux = aux->next;
		size++;
	}
	return (size);
}
