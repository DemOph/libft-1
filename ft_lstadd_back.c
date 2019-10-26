/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:26:47 by iounejja          #+#    #+#             */
/*   Updated: 2019/10/26 12:20:03 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	else
	{
		while ((*alst)->next != NULL)
			(*alst) = (*alst)->next;
		new->next = NULL;
		(*alst)->next = new;
	}
}
