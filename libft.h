/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:22:05 by iounejja          #+#    #+#             */
/*   Updated: 2019/10/25 16:37:03 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

size_t				ft_strlen(char const *str);
int					ft_atoi(char *str);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isprint(int c);
int					ft_isalnum(int c);
int					ft_strncmp(char *str1, char *str2, int l);
int					ft_isascii(int c);
void				*ft_memset(void *str, int c, size_t n);
void				ft_bzero(void *str, size_t l);
void				*ft_memcpy(void *dest, void *src, size_t l);
void				*ft_memccpy(void *dest, void *src, int c, size_t l);
void				*ft_memmove(void *dest, void *src, size_t l);
void				*ft_memchr(void *str, int c, size_t l);
void				*ft_calloc(size_t ne, size_t l);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd();
int					ft_memcmp(void *s1, void *s2, size_t l);
char				*ft_strchr(char *str, int c);
char				*ft_strrchr(char *str, int c);
char				*ft_strnstr(char *dest, char *src, size_t l);
char				*ft_strdup(char *str);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_itoa(int n);
char				**ft_split(char const *s, char c);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t				ft_strlcpy(char *dest, char *src, size_t l);
size_t				ft_strlcat(char *dest, char *src, size_t l);

typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **alst, t_list *new);

#endif
