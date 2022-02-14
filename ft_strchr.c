/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:30:03 by iwillmot          #+#    #+#             */
/*   Updated: 2022/02/14 15:04:07 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *) s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
			break ;
		i++;
	}
	if ((s[i] == '\0') && (i > 0))
		return (0);
	return ((char *) s + i);
}
