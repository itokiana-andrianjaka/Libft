/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:01:15 by tiana-an          #+#    #+#             */
/*   Updated: 2026/01/31 15:03:23 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(const char *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*part(char const *s, int start, int end)
{
	char	*sm;
	int		i;

	sm = (char *) malloc(sizeof(char) * (end - start + 1));
	if (!sm)
		return (NULL);
	i = 0;
	while (start < end)
		sm[i++] = s[start++];
	sm[i] = '\0';
	return (sm);
}

static void	ft_free(char **m, int r)
{
	int	i;

	i = 0;
	while (i < r)
	{
		free(m[i]);
		i++;
	}
	free(m);
}

static char	**do_split(char const *s, char c, char **m, size_t start)
{
	size_t	i;
	size_t	r;

	r = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
		{
			m[r] = part(s, start, i);
			if (!m[r++])
				return (ft_free(m, r - 1), NULL);
		}
	}
	m[r] = NULL;
	return (m);
}

char	**ft_split(char const *s, char c)
{
	char	**m;
	size_t	start;

	if (!s)
		return (NULL);
	m = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!m)
		return (NULL);
	start = 0;
	m = do_split(s, c, m, start);
	return (m);
}
