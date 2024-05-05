/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:12:26 by igama             #+#    #+#             */
/*   Updated: 2024/04/21 11:26:43 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **list)
{
	ft_printf("rra\n");
	node_to_beginning(list);
}

void	rrb(t_list **list)
{
	ft_printf("rrb\n");
	node_to_beginning(list);
}

void	rrr(t_list **list_a, t_list **list_b)
{
	ft_printf("rrr\n");
	node_to_beginning(list_a);
	node_to_beginning(list_b);
}
