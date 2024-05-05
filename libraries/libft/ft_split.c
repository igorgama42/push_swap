/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:06:46 by igama             #+#    #+#             */
/*   Updated: 2023/11/12 15:35:43 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function to count the amount of words in the matrix
static int	ft_count_words(const char *str, char separator)
{
	int	words;

	words = 0;
	while (*str)
	{
		if (*str != separator && (*(str + 1) == separator || !*(str + 1)))
			words++;
		str++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		word_num;
	int		i;
	int		start;

	if (!s)
		return (NULL);
	array = ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	word_num = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (word_num < ft_count_words(s, c))
			array[word_num] = ft_substr(s, start, i - start);
		word_num++;
	}
	return (array);
}
