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

int		ft_isalpha(int c);

int		ft_islower(int c);

int		ft_isupper(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *p, int val, size_t size);

void	*ft_bzero(void *p, size_t size);

void	*ft_memcpy(void *dst, const void *src, size_t size);

int		ft_tolower(char	c);

int		ft_toupper(char c);

int		ft_strncmp(const char *s1, const char *s2, size_t size);
#endif
