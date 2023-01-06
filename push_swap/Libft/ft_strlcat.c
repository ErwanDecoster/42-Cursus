/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <edecoste@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:20:27 by edecoste          #+#    #+#             */
/*   Updated: 2022/11/17 16:27:14 by edecoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	char		*pdest;
	const char	*psrc;
	int			size;
	int			len_dest;

	pdest = dest;
	psrc = src;
	size = dstsize;
	while (size-- && *pdest)
		pdest++;
	len_dest = pdest - dest;
	size = dstsize - len_dest;
	if (size == 0)
		return (len_dest + ft_strlen(psrc));
	while (*psrc)
	{
		if (size != 1)
		{
			*pdest++ = *psrc;
			size--;
		}
		psrc++;
	}
	*pdest = 0;
	return (len_dest + (psrc - src));
}
