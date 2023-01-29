/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:44:02 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/29 15:23:22 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = ((unsigned char *) dst);
	s = ((unsigned char *) src);
	i = -1;
	if (dst > src)
		while (++i < n)
			d[n - 1 - i] = s[n - 1 - i];
	else
		while (++i < n)
			d[i] = s[i];
	return (d);
}
