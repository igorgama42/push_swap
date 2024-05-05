/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_maker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:12:26 by igama             #+#    #+#             */
/*   Updated: 2024/04/21 11:34:35 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*list_maker(char **old_list)
{
	int		i;
	t_list	*new_list;

	i = -1;
	new_list = NULL;
	while (old_list[++i] != NULL)
	{
		add_into_ending(&new_list, ft_atoi(old_list[i]), 0);
	}
	return (new_list);
}
