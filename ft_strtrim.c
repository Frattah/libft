/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:21:46 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/20 14:48:40 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	j;
	size_t	i;
	size_t	len;
	char	*trim;

	j = 0;
	len = 0;
	i = -1;
	while (s1[++i])
		if (!ft_isin(s1[i], set))
			len++;
	trim = (char *) malloc(sizeof(char) * (len + 1));
	if (trim == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
		if (!ft_isin(s1[i], set))
			trim[j++] = s1[i];
	trim[j] = '\0';
	return (trim);
}
