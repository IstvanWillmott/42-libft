/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:33:13 by iwillmot          #+#    #+#             */
/*   Updated: 2022/02/07 14:27:59 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	if (needle[s] == '\0')
		return ((char *) haystack);
	while (haystack[i] && len > 0)
	{
		if (haystack[i] == needle[s])
		{
			s++;
			if (needle[s] == '\0')
				return ((char *) &haystack[i - s + 1]);
		}
		else if (s != 0)
			s = 0;
		i++;
		len--;
	}
	return (0);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%s", strnstr(argv[1], argv[2], 5));
	}
	return (0);
}*/
