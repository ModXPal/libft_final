/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 10:35:25 by rcollas           #+#    #+#             */
/*   Updated: 2021/05/21 14:51:36 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	is_charset(char c, char const *charset)
{
	while (*charset)
	{
		if (c == *charset++)
			return (1);
	}
	return (0);
}

static	int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static	int	ft_trim(char *trim_str, char const *set)
{
	int	start;

	start = 0;
	while (is_charset(*trim_str, set))
	{
		trim_str++;
		start++;
	}
	while (*trim_str)
		trim_str++;
	trim_str--;
	while (is_charset(*trim_str, set))
	{
		*trim_str = 0;
		trim_str--;
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_str;
	int		s1_len;
	int		i;

	i = 0;
	s1_len = ft_strlen(s1);
	trim_str = (char *)malloc(sizeof(*trim_str) * s1_len + 1);
	if (!trim_str)
		return (NULL);
	while (s1[i])
	{
		trim_str[i] = s1[i];
		i++;
	}
	return (&trim_str[ft_trim(trim_str, set)]);
}
