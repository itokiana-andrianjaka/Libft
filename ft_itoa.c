/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:54:20 by tiana-an          #+#    #+#             */
/*   Updated: 2026/01/30 13:54:23 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_int(int num)
{
	int		l;
	long	n;

	n = num;
	l = 0;
	if (n <= 0)
		l++;
	while (n)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int num)
{
	int		len;
	char	*m;
	long	n;

	n = num;
	len = len_int(n);
	m = (char *) malloc(sizeof(char) * (len + 1));
	if (!m)
		return (NULL);
	m[len_int(n)] = '\0';
	if (n < 0)
	{
		m[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		m[0] = '0';
	while (n > 0)
	{
		m[--len] = ((n % 10) + '0');
		n = n / 10;
	}
	return (m);
}
