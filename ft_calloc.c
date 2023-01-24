/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:40:41 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/24 17:53:29 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t siz)
{
	void			*p;

	p = (void *) malloc (nitems * siz);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nitems * siz);
	return (p);
}
