/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:19:41 by iounejja          #+#    #+#             */
/*   Updated: 2019/11/03 15:19:09 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *a)
{
	*(char*)a = 0;	
}

char	f(unsigned int r,char c)
{
	r = 1;
	return (c + 1);
}

void	ft(void *str)
{
	int i;

	i = 0;
	while (*(char*)(str + i) != '\0')
	{
		*(char*)(str + i) += 1;
		i++;
	}
}

void	*ft_f(void *str)
{
	int i;

	i = 0;
	while (*(char*)(str + i))
	{
		*(char*)(str + i) += 1;
		i++;
	}
	return (str);
}

int		main()
{
	//char *s1;
	//char s2[] = "Ounejjar";
	//char dest[] = "Issam";
	//char src[] = "Ounejjar";
	//char *ptr;
	//ptr = (char*)ft_calloc(0, 0);
	//int nb = 5;
	//int fd = open("txt", O_WRONLY);
	
	//-- ft_stlen
	//printf("ft_strlen = %d\n", ft_strlen("Hello World!"));
	
	//-- ft_atoi
	//printf("ft_atoi = %d\natoi = %d\n", ft_atoi("1658"), atoi("1658"));
	
	//-- ft_isdigit
	//printf("ft_isdigit = %d\n", ft_isdigit(97));
	
	//-- ft_isalpha
	//printf("ft_isalpha = %d\n", ft_isalpha(97));
	
	//-- ft_tolower
	//printf("ft_tolower = %d\n", ft_tolower(112));
	
	//-- ft_toupper
	//printf("ft_toupper = %d\n", ft_toupper(112));
	
	//-- ft_isprint
	//printf("ft_isprint = %d\n", ft_isprint(127));
	
	//-- ft_isalnum
	//printf("ft_isalnum = %d\n", ft_isalnum('0'));
	
	//-- ft_memset
	//ft_memset(s1 + 3, '+', 10);
	//printf("ft_memset = %s\n", s1);
	
	//-- ft_strncmp
	//printf("ft_strncmp = %d\n", ft_strncmp("hello", "hello", 4));
	
	//-- ft_strchr
	//printf("ft_strchr = %s\n", ft_strchr("Hello World!", 'l'));
	
	//-- ft_strrchr
	//printf("ft_strrchr = %s\n", ft_strrchr("Hello World!", 'l'));
	
	//-- ft_isascii
	//printf("ft_isascii = %d\n", ft_isascii('a'));
	
	//-- ft_bzero
	//ft_bzero(s1 + 3, 2);
	//printf("ft_bzero = %s\n", s1);
	
	//-- ft_memcpy
	//memcpy(dest, src, 4);
	//printf("ft_memcpy = %s\n", dest);
	
	//-- ft_memccpy
	//memccpy(dest, src, 'd', 3);
	//printf("ft_memccpy = %s\n", dest);
	
	//-- ft_memmove
	//memmove(dest, src, 4);
	//printf("ft_memmove = %s\n", dest);
	
	//-- ft_strnstr
	//printf("ft_strnstr = %s\n", strnstr(str, str1, 7));
	
	//-- ft_memchr
	//printf("ft_memchr = %s\n", ft_memchr("Hello World!", 'r', 12));
	
	//-- ft_memcmp
	//printf("ft_memcmp = %d\n", ft_memcmp(s1, s2, sizeof(s2)));
	
	//-- ft_strdup
	//printf("ft_strdup = %s\n", ft_strdup("Hello World!"));
	
	//-- ft_strlcpy
	//printf("ft_strlcpy = %lu\n", ft_strlcpy(NULL, "gyut", 5));
	//printf("strlcpy = %lu\n", strlcpy(NULL, "gyut", 5));
	
	//-- ft_calloc
	//printf("ft_calloc = %s\n", ptr);


	//-- ft_strlcat
	//printf("ft_strlcat = %zu\nstrlcat = %zu\n", ft_strlcat(NULL, ft_strdup("Hello"), 0), strlcat(NULL, ft_strdup("Hello"), 0));
	
	//-- ft_substr
	//printf("ft_substr = %s\n", ft_substr("Hello World!", 9, 7));
	
	//-- ft_strjoin
	//printf("ft_strjoin = %s\n", ft_strjoin(s1, ""));
	
	//-- ft_strtrim
	//printf("ft_strtrim = %s", ft_strtrim("wa b c \n \t\n abcHello World!cba \n\n\n\n\n\t      \t \t           \t\n aaaa bbbbbbbababbccccbcbcabw", "abc \n\t"));
	
	//-- ft_putchar_fd
	//ft_putchar_fd('n', fd);
	
	//-- ft_putstr_fd
	//ft_putstr_fd("Hello", fd);
	
	//-- ft_putendl_fd
	//ft_putendl_fd(s1, fd);
	
	//-- ft_putnbr_fd
	//ft_putnbr_fd(-20, fd);
	
	//-- ft_itoa
	//char *str = ft_itoa(22455455);
	//printf("ft_itoa = %s\n", str);
	//free(str);
	
	//-- ft_strmapi
	//printf("ft_strmapi = %s\n", ft_strmapi("abcd", f));
	
	//-- ft_split
	/*char **tab;
	tab = ft_split("  issam ounejjar                hello", ' ');
	while (*tab != NULL)
	{
		printf("%s\n", *tab);
		tab++;
	}*/

	//////////// BONUS ///////////////

	int i;
	t_list *lst;
	t_list *new;
	t_list *ls1;
	t_list *ls2;
	t_list *ls3;

	i = 1;
	//char *r = ft_strdup("ana");
	//char *y = ft_strdup("ana la3la");
	//new = ft_lstnew(r);
	//lst = ft_lstnew(y);
	
	char *l1 = ft_strdup("One");
	char *l2 = ft_strdup("Two");
	char *l3 = ft_strdup("Three");
	char *l4 = ft_strdup("Four");
	ls1 = ft_lstnew(l1);
	ls2 = ft_lstnew(l2);
	ls3 = ft_lstnew(l3);
	new = ft_lstnew(l4);
	t_list *h = ls1;
	//ls2 = ft_lstnew(ft_strdup("ounejjar"));
	//ls3 = ft_lstnew(ft_strdup("Lucifer"));
	//lst->next = ls1;
	ft_lstadd_back(&h, ls2);
	ft_lstadd_back(&h, ls3);
	ft_lstadd_back(&h, new);
	//ft_lstadd_back(&ls3, new);
	
	//ft_lstdelone(new, del);
	//ft_lstclear(&ls3, del);
	//free(r);
	//free(y);
	//free(l1);
	//free(l2);
	//free(l3);
	//free(l4);
	//printf("%s", new->content);
	printf("list size = %d\n", ft_lstsize(h));
	//printf("the last ele is = %s\n", (char*)ft_lstlast(ls2)->content);
	//ft_lstiter(ls1, ft);
	/*ft_lstmap(ls1, ft_f, del);
	while (ls1)
	{
		printf("ft_lstmap = %s\n", ls1->content);
		ls1 = ls1->next;
	}
	while (ls1)
	{
		printf("ele list %d = %s\n", i, ls1->content);
		ls1 = ls1->next;
		i++;
	}*/
	/*
	t_list **head;
	t_list *list1;
	t_list *list2;
	int i;

	i = 0;
	list1 = ft_lstnew(ft_strdup("One"));
	list2 = ft_lstnew(ft_strdup("Two"));
	ft_lstadd_back(&list1, list2);
	//ft_lstadd_back(&list1, list);
	while (list1->next)
	{
		printf("list -> %d = %s", i, list1->content);
		list1 = list1->next;
	}*/
}
