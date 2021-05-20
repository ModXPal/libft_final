/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 23:52:56 by rcollas           #+#    #+#             */
/*   Updated: 2021/05/10 08:51:05 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content);

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}

#include <stdio.h>

int	main(void)
{
	t_list *test;
	t_list *new;
	t_list *new1;

	test = ft_lstnew("bonjour");
	printf("%s\n", ((char *)test->content));
	new = ft_lstnew("test");
	new1 = ft_lstnew("newtest");
	ft_lstadd_front(&test, new);
	ft_lstadd_front(&test, new1);
	printf("%s\n", (char *)test->content);
	printf("%s\n", (char *)test->next->content);
	printf("%s\n", (char *)test->next->next->content);
}
