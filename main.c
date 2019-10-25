/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:19:41 by iounejja          #+#    #+#             */
/*   Updated: 2019/10/25 14:54:30 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	//char s1[] = "Hello";
	//char s2[] = "World!";
	char dest[] = "Hello";
	char src[] = "World!";
	//char *ptr;
	//ptr = (char*)ft_calloc(0, 0);
	//int nb = 5;
	//int fd = open("txt", O_WRONLY);
	//printf("ft_strlen = %d\n", ft_strlen("Hello World!"));
	//printf("ft_atoi = %d\n", ft_atoi("51973484"));
	//printf("ft_isdigit = %d\n", ft_isdigit(97));
	//printf("ft_isalpha = %d\n", ft_isalpha(97));
	//printf("ft_tolower = %d\n", ft_tolower(112));
	//printf("ft_toupper = %d\n", ft_toupper(112));
	//printf("ft_isprint = %d\n", ft_isprint(127));
	//printf("ft_isalnum = %d\n", ft_isalnum('0'));
	//ft_memset(str + 3, '+', 3);
	//printf("ft_memset = %s\n", str);
	//printf("ft_strncmp = %d\n", ft_strncmp("hello", "helLo", 4));
	//printf("ft_strchar = %s\n", ft_strchr("Hello World!", 'o'));
	//printf("ft_strrchr = %s\n", ft_strrchr("Hello World!", 'o'));
	//printf("ft_isascii = %d\n", ft_isascii('a'));
	//ft_bzero(str1 + 3, 2);
	//printf("ft_bzero = %s\n", str1);
	//ft_memcpy(dest, src, 4);
	//printf("ft_memcpy = %s\n", dest);
	//ft_memccpy(dest, src, 'e', sizeof(src));
	//printf("ft_memccpy = %s\n", dest);
	//ft_memmove(dest, src, sizeof(src));
	//printf("ft_memmove = %s\n", dest);
	//printf("ft_strnstr = %s\n", strnstr(str, str1, 7));
	//printf("ft_memchr = %s\n", ft_memchr("Hello World!", 'l', 4));
	//printf("ft_memcmp = %d\n", ft_memcmp(str, str1, sizeof(str1)));
	//printf("ft_strdup = %s\n", ft_strdup("Hello World!"));
	printf("ft_strlcpy = %lu\n", ft_strlcpy(dest, src, sizeof(dest)));
	//printf("ft_calloc = %s\n", ptr);
	//printf("ft_strlcat = %zu\n", ft_strlcat(s1, s2, 10));
	//printf("ft_substr = %s\n", ft_substr("Hello World!", 3, 6));
	//printf("ft_strjoin = %s\n", ft_strjoin(s1, s2));
	//printf("ft_strtrim = %s", ft_strtrim("abababab", "ab"));
	//printf("ft_split = %s\n", ft_split("Hello World!", 'o'));
	//ft_putchar_fd('c', fd);
	//ft_putstr_fd(s1, fd);
	//ft_putendl_fd(s1, fd);
	//ft_putnbr_fd(nb, fd);
	//printf("ft_itoa = %s\n", ft_itoa(-2147483648));
	//printf("ft_strmapi = %s\n", ft_strmapi(5, ft_strdup("hello")));
	/*char **tab;
	tab = ft_split("HiaHelloahhhhjkauhunjkaaaaaaaissambnhakhuamn", 'a');
	while (*tab != NULL)
	{
		printf("%s\n", *tab);
		tab++;
	}*/
}
