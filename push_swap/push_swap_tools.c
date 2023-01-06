/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <edecoste@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:31:35 by edecoste          #+#    #+#             */
/*   Updated: 2023/01/06 15:52:03 by edecoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	show_stack(int *stack)
{
	int	i;

	// ft_printf("show_stack");
	i = 0;
	while(stack[i])
	{
		// ft_printf("0");
		ft_printf("%d\n", stack[i++]);
	}
}
