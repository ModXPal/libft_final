/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 23:26:26 by rcollas           #+#    #+#             */
/*   Updated: 2021/05/21 10:52:17 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list *new_list;

	if (!(new_list = (t_list *)malloc(sizeof(*new_list))))
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}
