/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:02:04 by tiana-an          #+#    #+#             */
/*   Updated: 2026/01/30 14:02:06 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*m;
	int		i;
	int		r;

	if (!s1 || !s2)
		return (NULL);
	m = (char *) malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	r = 0;
	if (!m)
		return (NULL);
	while (s1[i])
	{
		m[r++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		m[r++] = s2[i];
		i++;
	}
	m[r] = '\0';
	return (m);
}
