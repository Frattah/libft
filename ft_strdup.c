/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:29:33 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/20 15:30:06 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*nw;
	int		len;
	
	len = ft_strlen(s);
	nw = (char *) malloc(sizeof(char) * len)
	if (nw == NULL)
		return (NULL);
	ft_strlcpy(nw, s, len + 1);
	return (nw);
}
