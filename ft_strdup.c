/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:01:47 by tiana-an          #+#    #+#             */
/*   Updated: 2026/01/30 14:01:49 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*c;
	int		len;
	int		a;
	char	*stock;

	c = (char *)s;
	len = ft_strlen(s);
	a = 0;
	stock = malloc (sizeof(char) * (len + 1));
	if (!stock)
		return (NULL);
	while (a < len)
	{
		stock[a] = c[a];
		a++;
	}
	stock[a] = '\0';
	return (stock);
}
