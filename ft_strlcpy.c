/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 11:58:20 by iounejja          #+#    #+#             */
/*   Updated: 2019/10/25 15:52:11 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t l)
{
	size_t	i;
	int		l_src;

	i = 0;
	if (!src)
		return (0);
	l_src = ft_strlen(src);
	if (!dest)
		return (l_src);
	if (l > 0)
	{
		while (src[i] && i < l - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (l_src);
}
