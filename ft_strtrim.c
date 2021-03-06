/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:21:32 by iwillmot          #+#    #+#             */
/*   Updated: 2022/02/14 15:06:01 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	left(char const *s1, char const *set)
{
	int	i;
	int	g;

	i = 0;
	g = 0;
	while (set[g])
	{
		if (s1[i] == set[g])
		{
			i++;
			g = 0;
		}
		else
			g++;
	}
	return (i);
}

int	right(char const *s1, char const *set, int len)
{
	int	i;
	int	g;

	i = 0;
	g = 0;
	len--;
	while (set[g])
	{
		if (s1[len - i] == set[g])
		{
			i++;
			g = 0;
		}
		else
			g++;
	}
	return (i);
}

int	absolute(int *chk, int len)
{
	int	i;

	i = len - (chk[0] + chk[1]);
	if (i < 0)
		i = -1;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		g;
	int		len;
	int		chk[2];
	char	*s2;

	i = 0;
	g = 0;
	len = ft_strlen(s1);
	chk[0] = left(s1, set);
	chk[1] = right(s1, set, len);
	if (chk[0] == 0 && chk[1] == 0)
		len += 2;
	s2 = malloc(1 + absolute(chk, len));
	i = chk[0];
	while ((s1[i]) && (g < len - (chk[0] + chk[1])))
	{
		s2[g] = s1[i];
		g++;
		i++;
	}
	s2[g] = '\0';
	return (s2);
}
