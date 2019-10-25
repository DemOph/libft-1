/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:23:22 by iounejja          #+#    #+#             */
/*   Updated: 2019/10/25 14:34:49 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t l)
{
	size_t	i;
	size_t	l_dest;
	size_t	l_src;
	size_t	size;

	i = 0;
	l_dest = ft_strlen(dest);
	l_src = ft_strlen(src);
	size = l_dest;
	if (l <= l_dest)
		return (l_src + l);
	else
	{
		while (src[i] && l_dest < l - 1)
			dest[l_dest++] = src[i++];
		dest[l_dest] = '\0';
		return (size + l_src);
	}
}
