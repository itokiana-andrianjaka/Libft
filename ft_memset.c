/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:59:59 by tiana-an          #+#    #+#             */
/*   Updated: 2026/01/30 14:00:01 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			b;

	a = (unsigned char *)s;
	b = 0;
	while (b < n)
	{
		*(a + b) = (unsigned char)c;
		b++;
	}
	return (s);
}
