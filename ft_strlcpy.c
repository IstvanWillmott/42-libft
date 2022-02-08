/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:07:40 by iwillmot          #+#    #+#             */
/*   Updated: 2022/02/02 16:19:35 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
#include <string.h>
int	main(int argc, char *argv[])
{
	int len = 5;
	if (argc == 3)
	{
		printf("DST: %s - SRC: %s\n", argv[1], argv[2]);
		printf("MYCOUNT: %zu\n", ft_strlcpy(argv[1], argv[2], len));
		//printf("CPYCOUNT: %zu\n", strlcpy(argv[1], argv[2], len));
		printf("MYRES: %s\n", argv[1]);
	}
	return(0);
}*/
