/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:35:52 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/27 16:06:06 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int val, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (*(unsigned char *)(ptr + i) == (unsigned char)val)
			return ((void *)(ptr + i));
	return (NULL);
}
