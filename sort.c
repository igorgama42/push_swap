/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:12:26 by igama             #+#    #+#             */
/*   Updated: 2024/04/21 11:30:30 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **list_a, t_list **list_b)
{
	if (ft_is_sorted(list_a) == 1)
		return ;
	if (ft_stack_size(list_a) >= 1 && ft_stack_size(list_a) <= 5)
		one_to_five(list_a, list_b);
	else
		more_than_five(list_a, list_b);
}
