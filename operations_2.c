/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:12:26 by igama             #+#    #+#             */
/*   Updated: 2024/04/21 11:29:32 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **list)
{
	ft_printf("ra\n");
	node_to_ending(list);
}

void	rb(t_list **list)
{
	ft_printf("rb\n");
	node_to_ending(list);
}

void	rr(t_list **list_a, t_list **list_b)
{
	ft_printf("rr\n");
	node_to_ending(list_a);
	node_to_ending(list_b);
}
