/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:31:49 by rcollas           #+#    #+#             */
/*   Updated: 2021/04/26 12:37:49 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	char *ptr;

	ptr = 0;
	while (*s)
	{
		if (*s == c)
			ptr = (char *)s;
		s++;
	}
	return (ptr);
}

#include <stdio.h>

int	main(void)
{
	char *test = "revoici le test";
	printf("%s\n", strrchr(test, 'e'));
}
