/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:02:14 by tiana-an          #+#    #+#             */
/*   Updated: 2026/01/30 14:02:19 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		d;
	size_t		s;
	size_t		r;

	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	r = d;
	if (size <= d)
		return (size + s);
	while (src[i] && r < (size - 1))
		dst[r++] = src[i++];
	dst[r] = '\0';
	return (d + s);
}
