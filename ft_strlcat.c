/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:53:05 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/29 14:23:03 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	ln;
	size_t	i;

	ln = ft_strlen(dst);
	i = -1;
	if (n == 0)
		return (ft_strlen(src));
	if (ln < n - 1 && n > 0)
	{
		while (src[++i] && ln + i < n - 1)
			dst[ln + i] = src[i];
		dst[ln + i] = '\0';
	}
	if (ln > n)
		ln = n;
	return (ln + ft_strlen(src));
}
