/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <edecoste@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:40:03 by edecoste          #+#    #+#             */
/*   Updated: 2022/11/13 14:09:25 by edecoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*value;

	i = ft_strlen(s);
	if (start >= i)
	{
		value = malloc(sizeof(char));
		value[0] = 0;
	}
	else if (start + len > i)
		value = malloc(((i - start + 1) * sizeof(char)));
	else
		value = malloc((len + 1 * sizeof(char)));
	if (!value || start >= i)
		return (value);
	i = 0;
	while (i < len && s[i + start])
	{
		value[i] = s[i + start];
		i++;
	}
	value[i] = 0;
	return (value);
}
