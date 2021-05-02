/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:23:10 by rcollas           #+#    #+#             */
/*   Updated: 2021/04/26 15:30:13 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char *str;
	int i;

	i = -1;
	if (!(str = (char *)malloc(sizeof(*str) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[++i])
		str[i] = s[i];
	str[i] = 0;
	return (str);
}

#include <stdio.h>

int	main(void)
{
	const char *test = "bonjour a tous";
	printf("%s\n", ft_strdup(test));
}
