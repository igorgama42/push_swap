/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:12:26 by igama             #+#    #+#             */
/*   Updated: 2024/05/04 22:12:43 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "stdio.h"

void	free_matrix(char **array, int dif);

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	char	**temp;

	list_a = NULL;
	list_b = NULL;
	if (check_all_limits(argc, argv))
		return (ft_printf("Error\n"));
	if (argc < 2)
		return (0);
	argv++;
	if (argc == 2)
		temp = ft_split(*argv, ' ');
	else
		temp = argv;
	if (arg_error(temp) == 0)
		return (ft_printf("Error"), 0);
	list_a = list_maker(temp);
	free_matrix(temp, argc);
	if (same_number(&list_a, &list_b) == 0)
		return (ft_printf("Error"), 0);
	index_maker(&list_a);
	sort(&list_a, &list_b);
	free_stack(list_a);
	free_stack(list_b);
}

void	free_matrix(char **array, int dif)
{
	int	i;

	i = 0;
	if (dif != 2)
		return ;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}
