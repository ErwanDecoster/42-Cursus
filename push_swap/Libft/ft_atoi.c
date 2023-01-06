/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <edecoste@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:16:37 by edecoste          #+#    #+#             */
/*   Updated: 2022/11/23 14:31:38 by edecoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_pos_neg(const char *str, int *i)
{
	if (str[(*i)] == '-')
	{
		(*i)++;
		return (0);
	}
	else if (str[(*i)] == '+')
	{
		(*i)++;
		return (1);
	}
	else if (str[(*i)] >= '0' && str[(*i)] <= '9')
		return (1);
	else
		return (2);
}

static void	ft_skipws(const char *str, int *i)
{
	while (str[*(i)] > 8 & str[*(i)] < 14 || str[*(i)] == ' ')
		(*i)++;
}

int	ft_atoi(const char *str)
{
	int				i;
	long long int	num;
	int				*p_i;
	int				sign;

	i = 0;
	num = 0;
	p_i = &i;
	ft_skipws(str, p_i);
	sign = check_pos_neg(str, p_i);
	if (sign == 2)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (num != ((num * 10 + (sign * (str[i] - '0'))) / 10))
			return ((int)((sign + 1) / 2 / -1));
		num = num * 10 + (str[i] - 48);
		i++;
	}
	if (sign == 0)
		num = num * -1;
	return ((int)num);
}
