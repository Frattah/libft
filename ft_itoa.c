/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:10:08 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/24 16:11:04 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*limit(int n)
{
	char	*nb;

	nb = (char *) malloc(sizeof(char) * (12));
	ft_strlcpy(nb, "-2147483648", 12);
	return (nb);
}

char	*ft_itoa(int n)
{
	size_t	dgt;
	char	*nb;
	int		meno;

	meno = 0;
	if (n == -2147483648)
		return (limit(n));
	if (n < 0)
	{
		meno++;
		n = -n;
	}
	dgt = ft_cntdgt(n);
	nb = (char *) malloc(sizeof(char) * (dgt + 1 + meno));
	if (nb == NULL)
		return (NULL);
	nb[dgt + meno] = '\0';
	while (dgt > 0)
	{
		nb[dgt-- + meno - 1] = n % 10 + '0';
		n /= 10;
	}
	if (meno)
		nb[0] = '-';
	return (nb);
}
