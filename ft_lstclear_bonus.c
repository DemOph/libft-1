/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 16:01:48 by iounejja          #+#    #+#             */
/*   Updated: 2019/10/28 16:58:47 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *list;

	list = *lst;
	if (list)
	{
		while (list != NULL)
		{
			del(list->content);
			free(list);
			list = list->next;
		}
		*lst = NULL;
	}
}
