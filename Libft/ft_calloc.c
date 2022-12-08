/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <edecoste@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:36:58 by edecoste          #+#    #+#             */
/*   Updated: 2022/11/24 11:03:25 by edecoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*var;

	if (size && count > SIZE_MAX / size)
		return (0);
	var = malloc(count * size);
	if (!var)
		return (0);
	ft_bzero(var, count * size);
	return (var);
}
