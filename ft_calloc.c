/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:45:55 by iwillmot          #+#    #+#             */
/*   Updated: 2022/02/14 15:05:04 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_sz;
	void	*dst;

	total_sz = count * size;
	dst = malloc(total_sz);
	if (!dst)
		return (NULL);
	ft_memset(dst, 0, total_sz);
	return (dst);
}
