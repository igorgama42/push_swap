/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:26:15 by igama             #+#    #+#             */
/*   Updated: 2023/11/08 18:43:33 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*items;
	size_t	i;

	i = nmemb * size;
	if ((nmemb) && (i) && ((i / nmemb) != size))
		return ((char *) NULL);
	items = malloc(i);
	if (!items)
		return (0);
	ft_bzero(items, i);
	return (items);
}
