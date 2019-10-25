/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:32:51 by iounejja          #+#    #+#             */
/*   Updated: 2019/10/23 12:35:54 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t l)
{
	size_t i;

	i = 0;
	if (dest > src)
	{
		while (l--)
		{
			*(char*)(dest + l) = *(char*)(src + l);
		}
		return (dest);
	}
	if (!dest && !src)
		return (NULL);
	while (i < l)
	{
		*(char*)(dest + i) = *(char*)(src + i);
		i++;
	}
	return (dest);
}
