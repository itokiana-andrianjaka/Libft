/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:03:23 by tiana-an          #+#    #+#             */
/*   Updated: 2026/02/03 18:55:45 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	s;
	char	*b;
	char	*l;

	i = 0;
	b = (char *)big;
	l = (char *)little;
	if (!b && len == 0)
		return (NULL);
	if (!l[i])
		return (b);
	while (b[i] && i < len)
	{
		s = 0;
		while (l[s] && l[s] == b[i + s] && (i + s) < len)
			s++;
		if (l[s] == '\0')
			return (&b[i]);
		i++;
	}
	return (NULL);
}
