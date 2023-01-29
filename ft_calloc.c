/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:40:41 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/29 15:27:00 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t siz)
{
	void			*p;

	if (nitems == SIZE_MAX || siz == SIZE_MAX)
		return (NULL);
	p = (void *) malloc (nitems * siz);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nitems * siz);
	return (p);
}
