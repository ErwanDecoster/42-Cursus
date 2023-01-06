/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_move_3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <edecoste@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:02:07 by edecoste          #+#    #+#             */
/*   Updated: 2023/01/06 13:41:33 by edecoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// rra (reverse rotate a) : Décale d’une position vers le bas tous les élements de
// la pile a. Le dernier élément devient le premier.
void	move_rra(int *stack_a, int *stack_b)
{
	(void)stack_a;
	(void)stack_b;
}

// rrb (reverse rotate b) : Décale d’une position vers le bas tous les élements de
// la pile b. Le dernier élément devient le premier.
void	move_rrb(int *stack_a, int *stack_b)
{
	(void)stack_a;
	(void)stack_b;
}

// rrr : rra et rrb en même temps.
void	move_rrr(int *stack_a, int *stack_b)
{
	move_rra(stack_a, stack_b);
	move_rrb(stack_a, stack_b);
}