/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_move_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <edecoste@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:02:07 by edecoste          #+#    #+#             */
/*   Updated: 2023/01/06 13:37:54 by edecoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// pb (push b) : Prend le premier élément au sommet de a et le met sur b.
// Ne fait rien si a est vide.
void	move_pb(int *stack_a, int *stack_b)
{
	(void)stack_a;
	(void)stack_b;
}

// ra (rotate a) : Décale d’une position vers le haut tous les élements de la pile a.
// Le premier élément devient le dernier.
void	move_ra(int *stack_a, int *stack_b)
{
	(void)stack_a;
	(void)stack_b;
}

// rb (rotate b) : Décale d’une position vers le haut tous les élements de la pile b.
// Le premier élément devient le dernier.
void	move_rb(int *stack_a, int *stack_b)
{
	(void)stack_a;
	(void)stack_b;
}

// rr : ra et rb en même temps.
void	move_rr(int *stack_a, int *stack_b)
{
	move_ra(stack_a, stack_b);
	move_rb(stack_a, stack_b);
}
