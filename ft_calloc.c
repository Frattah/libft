/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:40:41 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/19 12:41:03 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb, size_t by)
{
	void	*p;

	p = malloc(nb * by);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nb * by);
	return (p);
}
