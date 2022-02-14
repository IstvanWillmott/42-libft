/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:33:13 by iwillmot          #+#    #+#             */
/*   Updated: 2022/02/14 15:04:36 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		s;

	i = 0;
	s = 0;
	if (needle[s] == '\0')
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[s])
		{
			s++;
			if (needle[s] == '\0')
				return ((char *) &haystack[i - s + 1]);
		}
		else if (s != 0)
		{
			i -= s;
			s = 0;
		}
		i++;
	}
	return (0);
}
