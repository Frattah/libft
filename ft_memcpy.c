/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:30:02 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/24 15:57:36 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	*d;
	unsigned char	*s;

	i = -1;
	if (src == NULL || n == 0)
		return (dst);
	if (dst == NULL)
		return (NULL);
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	while (++i < n)
		d[i] = s[i];
	return (dst);
}
