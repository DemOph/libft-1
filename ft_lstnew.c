/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:10:21 by iounejja          #+#    #+#             */
/*   Updated: 2019/10/25 18:07:12 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *str;

	str = malloc(sizeof(t_list));
	if (str)
	{
		str->content = content;
		str->next = NULL;
	}
	return (str);
}
