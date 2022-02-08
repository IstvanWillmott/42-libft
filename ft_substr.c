/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:38:43 by iwillmot          #+#    #+#             */
/*   Updated: 2022/02/02 16:49:10 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	g;
	char	*s1;

	i = start;
	g = 0;
	s1 = malloc(len + 1);
	if ((ft_strlen(s)) < start)
		return (s1);
	while ((s[i]) && (g < len))
	{
		s1[g] = s[i + g];
		g++;
	}
	s1[g] = '\0';
	return (s1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_substr("find the letter lad", 'l', 6));
	return (0);
}*/
