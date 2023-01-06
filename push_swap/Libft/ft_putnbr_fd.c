/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <edecoste@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:22:55 by edecoste          #+#    #+#             */
/*   Updated: 2023/01/06 15:30:38 by edecoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int				rt_val;
	int				temp;
	unsigned int	pn;

	rt_val = 0;
	temp = 0;
	pn = n;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{	
		if (n < 0)
		{
			temp = ft_putchar_fd('-', fd);
			if (temp == -1)
				return (temp);
			n = -n;
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		temp = ft_putchar_fd((n % 10) + '0', fd);
		if (temp == -1)
			return (temp);
	}
	return (nb_len(pn));
}
