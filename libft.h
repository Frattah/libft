/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:47:21 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/24 17:41:02 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIFT_H
# define LIFT_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_isalpha(int c);

int		ft_islower(int c);

int		ft_isupper(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

char	*ft_itoa(int n);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *p, int val, size_t size);

void	*ft_bzero(void *p, size_t size);

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t n);

size_t	ft_strlcat(char *dst, const char *src, size_t n);

int		ft_tolower(char	c);

int		ft_toupper(char c);

void	*ft_memchr(const void *ptr, int val, size_t n);

int		ft_memcmp(const void *ptr1, const void *ptr2, size_t n);

int		ft_atoi(const char *s);

size_t	ft_cntword(const char *s, char c);

size_t	ft_cntdgt(int n);

int		ft_strncmp(const char *s1, const char *s2, size_t size);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*ft_strdup(const char *s);

void	*ft_calloc(size_t nitems, size_t siz);

char	*ft_strnstr(const char *s1, const char *s2, size_t n);

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new);

int		ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);

size_t	ft_strlen_chr(const char *s, char c);

char	*ft_skpstr(char *s, char c);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

int		ft_isin(char c, char const *set);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	**ft_split(const char  *s, char c);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif
