/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:23:46 by igama             #+#    #+#             */
/*   Updated: 2024/05/04 22:33:48 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	same_number(t_list **list_a, t_list **list_b)
{
	t_list	*aux1;
	t_list	*aux2;

	if (!*list_a)
		return (0);
	aux1 = *list_a;
	while (aux1->next)
	{
		aux2 = aux1->next;
		while (aux2)
		{
			if (aux1->data == aux2->data)
			{
				free_stack(*list_a);
				free_stack(*list_b);
				return (0);
			}
			aux2 = aux2->next;
		}
		aux1 = aux1->next;
	}
	return (1);
}

int	arg_error(char **arg_list)
{
	int	i;
	int	j;

	i = -1;
	while (arg_list[++i])
	{
		j = -1;
		while (arg_list[i][++j])
		{
			if (j == 0 && (arg_list[i][j] == '+' || arg_list[i][j] == '-'))
				j++;
			if (!ft_isdigit(arg_list[i][j]))
			{
				return (0);
			}
		}
	}
	return (1);
}

static int	check_limits(char *nptr)
{
	int			ct;
	int			minus;
	long long	nbr;

	ct = 0;
	minus = 1;
	nbr = 0;
	while (nptr[ct] == ' ' || (nptr[ct] >= 9 && nptr[ct] <= 13))
		ct++;
	if (nptr[ct] == '-')
	{
		minus *= -1;
		ct++;
	}
	else if (nptr[ct] == '+')
		ct++;
	while (nptr[ct] >= '0' && nptr[ct] <= '9')
	{
		nbr *= 10;
		nbr += nptr[ct] - '0';
		ct++;
	}
	nbr *= minus;
	return (nbr > 2147483647 || nbr < -2147483648);
}

int	check_all_limits(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc)
	{
		if (check_limits(argv[i]))
			return (1);
		i++;
	}
	return (0);
}
