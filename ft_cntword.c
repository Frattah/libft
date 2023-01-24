/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntword.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 08:51:06 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/24 17:07:03 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_cntword(char const *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
		{
			if (i != 0 && s[i - 1] != c)
				w++;
			i++;
		}
	}
	if (s[i - 1] != '\0' && s[i - 1] != c)
		w++;
	return (w);
}
