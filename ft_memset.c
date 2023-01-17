/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:43:20 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/17 12:10:08 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int val, size_t size)
{
	size_t			i;
	unsigned char	*nw;

	i = -1;
	if (p == NULL)
		return (NULL);
	else
	{
		nw = (unsigned char *) p;
		while (++i < size)
			nw[i] = val;
	}
	return (p);
}
