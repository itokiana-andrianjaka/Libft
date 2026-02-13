/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:04:41 by tiana-an          #+#    #+#             */
/*   Updated: 2026/01/30 14:04:43 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	endex_s(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (in_set(s1[i], set))
		i++;
	return (i);
}

static int	endex_e(char const *s1, char const *set)
{
	int	len;

	len = ft_strlen(s1);
	while (in_set(s1[len - 1], set))
		len--;
	return (len - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*m;
	int		start;
	int		end;
	int		r;

	if (!s1 || !set)
		return (NULL);
	start = endex_s(s1, set);
	end = endex_e(s1, set);
	r = 0;
	if (start > end || *s1 == '\0')
		return (ft_strdup(""));
	m = malloc(sizeof(char) * (end - start + 2));
	if (!m)
		return (NULL);
	while (start <= end)
		m[r++] = s1[start++];
	m[r] = '\0';
	return (m);
}
