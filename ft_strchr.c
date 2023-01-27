/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:42:59 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/27 16:09:43 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if (!ft_isascii(c))
		return ((char *) s);
	i = -1;
	while (s[++i])
		if (s[i] == c)
			return ((char *) &s[i]);
	if (c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
