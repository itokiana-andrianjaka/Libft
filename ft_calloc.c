/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:53:05 by tiana-an          #+#    #+#             */
/*   Updated: 2026/01/30 13:53:09 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*m;
	size_t	total;

	total = nmemb * size;
	if (size != 0 && total / size != nmemb)
		return (NULL);
	m = (void *)malloc (total);
	if (!m)
		return (NULL);
	ft_bzero(m, total);
	return ((void *)m);
}
