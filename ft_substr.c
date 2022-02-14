/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:38:43 by iwillmot          #+#    #+#             */
/*   Updated: 2022/02/14 15:05:33 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	g;
	size_t	strln;
	char	*s1;

	i = start;
	g = 0;
	strln = ft_strlen(s);
	if (start > strln + 1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
		return (s1);
	}
	if (strln > len)
		s1 = malloc(len + 1);
	else
		s1 = malloc(strln + 1);
	while ((s[i + g]) && (g < len))
	{
		s1[g] = s[i + g];
		g++;
	}
	s1[g] = '\0';
	return (s1);
}
