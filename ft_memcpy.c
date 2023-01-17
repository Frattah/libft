/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:02:13 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/17 12:12:10 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t	i;
	unsigned char	*d;
	unsigned char	*s;

	i = -1;
	if (src == NULL || dst == NULL)
		return (NULL);
	else
	{
		s = (unsigned char *) src;
		d = (unsigned char *) dst;
		while (++i < size)
			d[i] = s[i];
	}
	return (dst);
}
