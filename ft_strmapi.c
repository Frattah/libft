/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:58:22 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/20 15:18:44 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s_cpy;

	s_cpy = ft_strdup(s);
	if (s_cpy == NULL)
		return (NULL);
	i = 0;
	while  (s_cpy[i])
	{
		s_cpy[i] = (*f)(i, s_cpy[i]);
		i++;
	}
	return (s_cpy);
}
