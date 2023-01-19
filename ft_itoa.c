/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:10:08 by frmonfre          #+#    #+#             */
/*   Updated: 2023/01/19 11:57:05 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*control(int n)
{
	if (n == -2147483648)
		return ("-2147483648");
	else
		return (NULL);
	return (NULL);
}

char	*ft_itoa(int n)
{
	size_t	dgt;
	char	*nb;
	int		meno;

	meno = 0;
	if (n < 0)
	{
		meno++;
		n = -n;
	}
	dgt = ft_cntdgt(n);
	nb = (char *) malloc(sizeof(char) * (dgt + 1 + meno));
	if (control(n) != NULL)
		return (control(n));
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
