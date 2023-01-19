/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:47:21 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/19 12:48:01 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIFT_H
# define LIFT_H
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_list
{
	void		*content;
	struct s_list	*next;
}			t_list;

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

void	*ft_memcpy(void *dst, const void *src, size_t size);

int		ft_tolower(char	c);

int		ft_toupper(char c);

int		ft_atoi(const char *s);

size_t	ft_cntword(const char *s, char c);

size_t	ft_cntdgt(int n);

int		ft_strncmp(const char *s1, const char *s2, size_t size);

char	*ft_strchr(char *s, int c);

char	*ft_strrchr(char *s, int c);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*ft_strdup(const char *s);

void	*ft_calloc(size_t nb, size_t by);

char	*ft_strnstr(const char *s1, const char *s2, size_t n);

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new);

int		ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);

size_t	ft_strlen_chr(const char *s, char c);

char	*ft_skpstr(char *s, char c);

char	**ft_split(const char  *s, char c);

#endif
