/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:43:52 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/27 16:06:42 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (!ft_isascii(c))
		return ((char *) s);
	i = ft_strlen(s) + 1;
	while (--i >= 0)
		if (s[i] == c)
			return ((char *)(s + i));
	return (NULL);
}
