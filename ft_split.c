/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 09:15:49 by rcollas           #+#    #+#             */
/*   Updated: 2021/05/24 15:42:53 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

static unsigned int	ft_ustrlen(char const *str, char charset)
{
	unsigned int	i;

	i = 0;
	while (str[i] && !is_charset(str[i], charset))
		i++;
	return (i);
}

static unsigned int	ft_count_words(char const *str, char charset)
{
	unsigned int	words_count;
	unsigned int	is_word;

	words_count = 0;
	is_word = 1;
	while (str && *str)
	{
		if (is_charset(*str, charset))
			is_word = 1;
		else if (is_word == 1)
		{
			words_count++;
			is_word = 0;
		}
		str++;
	}
	return (words_count);
}

static char	**ft_free(char **str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i > size)
		free(str[i++]);
	free(str);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	unsigned int	j;
	unsigned int	i;
	unsigned int	words;

	words = ft_count_words(s, c);
	i = -1;
	split = (char **)malloc(sizeof(*split) * words + 1);
	if (!split)
		return (NULL);
	while (++i < words)
	{
		while (*s && is_charset(*s, c))
			s++;
		split[i] = (char *)malloc(sizeof(**split) * ft_ustrlen(s, c) + 1);
		if (!split[i])
			return (ft_free(split, i));
		j = 0;
		while (*s && !is_charset(*s, c))
			split[i][j++] = *s++;
		split[i][j] = 0;
	}
	split[i] = 0;
	return (split);
}
