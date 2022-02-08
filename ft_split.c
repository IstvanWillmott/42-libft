/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:08:49 by iwillmot          #+#    #+#             */
/*   Updated: 2022/02/08 14:44:21 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	leng(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while ((s[i]) && (s[i] == c))
		i++;
	while ((s[i + len]) && (s[i + len] != c))
		len++;
	return (len);
}

void	split_assign(char const *s, char **new, char c, int segs)
{
	int	i;
	int	g;
	int	x;

	i = 0;
	g = 0;
	x = 0;
	while ((s[i]) && segs > 0)
	{
		new[x] = (char *) malloc(leng(s, c, i) + 1);
		while ((s[i]) && (s[i] == c))
			i++;
		while ((s[i]) && (s[i] != c))
		{
			new[x][g] = s[i];
			g++;
			i++;
		}
		new[x][g] = '\0';
		x++;
		segs--;
		g = 0;
	}
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		segs;
	char	**new;

	i = 0;
	segs = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
			if (i == 0 || s[i - 1] == c)
				segs++;
		i++;
	}
	new = (char **) malloc((segs + 1) * (sizeof(char *)));
	split_assign(s, new, c, segs);
	return (new);
}
/*
int main()
{
	ft_split("  count    these  segs     ", ' ');
	return (0);
}*/
