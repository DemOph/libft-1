/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:00:45 by iounejja          #+#    #+#             */
/*   Updated: 2019/10/25 13:19:12 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		n_words(char const *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			while (str[i] != c && str[i] != '\0')
				i++;
			if (str[i] == c || str[i] == '\0')
			{
				count++;
				if (str[i] != '\0')
					i++;
			}
		}
	}
	return (count);
}

int		l_words(char const *str, int i, char c)
{
	int l;

	l = 0;
	if (str)
	{
		while (str[i] != c && str[i] != '\0')
		{
			i++;
			l++;
		}
	}
	return (l);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	if (!(tab = malloc(sizeof(char*) * (n_words(s, c) + 1))) || !s)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			k = 0;
			if (!(tab[j] = malloc(sizeof(char) * (l_words(s, i, c) + 1))))
				return (NULL);
			while (s[i] != c && s[i] != '\0')
				tab[j][k++] = s[i++];
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}
