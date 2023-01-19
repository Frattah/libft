/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 09:10:59 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/19 10:46:16 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	words;
	char	*s_cpy;
	size_t	len;

	if (s == NULL)
		return (NULL);
	s_cpy = (char *) s;
	words = ft_cntword(s, c);
	split = (char **) malloc(sizeof(char *) * (words + 1));
	if (split == NULL)
		return (NULL);
	split[words] = NULL;
	while (split[0])
	{
		s_cpy = ft_skpstr(s_cpy, c);
		len = ft_strlen_chr(s_cpy, c);
		split[0] = (char *) malloc(sizeof(char) * (len + 1));
		if (split[0] == NULL)
			return (NULL);
		ft_strlcpy(split[0], s_cpy, len + 1);
		split++;
		s_cpy += len;
	}
	return (split - words);
}
