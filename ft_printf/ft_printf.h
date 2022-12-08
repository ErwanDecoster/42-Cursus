/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <edecoste@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:09:55 by edecoste          #+#    #+#             */
/*   Updated: 2022/11/23 14:37:09 by edecoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...)__attribute__((format(printf, 1, 2)));
int		ft_putchar_fd(int c, int fd);
int		ft_putnbr_b_fd(unsigned long int nbr, char *base, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);

#endif
