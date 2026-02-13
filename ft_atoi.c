/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:52:32 by tiana-an          #+#    #+#             */
/*   Updated: 2026/01/30 13:52:45 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			i;
	long int	res;
	int			s;
	char		*c;

	i = 0;
	c = (char *)nptr;
	s = 1;
	res = 0;
	while (c[i] == 32 || (c[i] <= 13 && c[i] >= 9))
		i++;
	if (c[i] == '+' || c[i] == '-')
	{
		if (c[i] == '-')
			s = s * -1;
		i++;
	}
	while (ft_isdigit(c[i]))
	{
		res = (res * 10) + (c[i] - '0');
		i++;
	}
	return (s * res);
}
