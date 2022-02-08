/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:03:47 by iwillmot          #+#    #+#             */
/*   Updated: 2022/01/26 13:35:45 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			s;
	int			s1len;
	int			s2len;
	char		*s3;

	i = 0;
	s = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	s3 = malloc(s1len + s2len);
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[s])
	{
		s3[i + s] = s2[s];
		s++;
	}
	return (s3);
}
