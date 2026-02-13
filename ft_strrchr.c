/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:03:39 by tiana-an          #+#    #+#             */
/*   Updated: 2026/01/30 14:03:41 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				r;
	char			*stock;
	unsigned char	t;

	i = ft_strlen(s);
	stock = (char *)s;
	t = (unsigned char)c;
	r = 0;
	if (c == '\0')
		return (&stock[i]);
	while ((stock[i] != t) && stock[r])
	{
		r++;
		i--;
	}
	if (stock[i] == t)
		return (&stock[i]);
	return (NULL);
}
