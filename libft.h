/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:55:30 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/17 12:33:05 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIFT_H
#	define LIFT_H
#	include <stdlib.h>
#	include <stdio.h>

typedef struct	s_list
{
	void		*content;
	struct s_list	*next;
}			t_list;

int	ft_isalpha(int c);

int	ft_islower(int c);

int	ft_isupper(int c);

int	ft_isdigit(int c);

int	ft_isalnum(int c);

int	ft_isascii(int c);

int	ft_isprint(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *p, int val, size_t size);

void	*ft_bzero(void *p, size_t size);

void	*ft_memcpy(void *dst, const void *src, size_t size);

int	ft_tolower(char	c);

int	ft_toupper(char c);

int	ft_cntword(const char *s, char c);

int	ft_strncmp(const char *s1, const char *s2, size_t size);

char	*ft_strchr(char *s, int c);

char	*ft_strrchr(char *s, int c);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*ft_strdup(const char *s);

void	*ft_calloc(size_t nb, size_t by);

char	*ft_strnstr(const char *s1, const char *s2, size_t n);

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new);

int	ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);

#endif
