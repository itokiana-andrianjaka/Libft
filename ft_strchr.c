/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:01:37 by tiana-an          #+#    #+#             */
/*   Updated: 2026/01/30 14:01:38 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*stock;

	i = 0;
	stock = (char *)s;
	while ((stock[i] != (unsigned char)c) && stock[i])
		i++;
	if (stock[i] == (unsigned char)c)
		return (&stock[i]);
	return (NULL);
}
