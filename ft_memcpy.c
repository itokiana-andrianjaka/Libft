/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:59:42 by tiana-an          #+#    #+#             */
/*   Updated: 2026/01/30 13:59:43 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p;
	const unsigned char	*c;

	if (!dest && !src)
		return (0);
	i = 0;
	p = (unsigned char *)dest;
	c = (const unsigned char *)src;
	while (i < n)
	{
		*p++ = *c++;
		i++;
	}
	return (dest);
}
