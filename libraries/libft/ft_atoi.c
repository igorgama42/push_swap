/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:12:45 by igama             #+#    #+#             */
/*   Updated: 2023/11/09 16:39:50 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	ct;
	int	minus;
	int	nbr;

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
	return (nbr * minus);
}
