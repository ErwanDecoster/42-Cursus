/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <edecoste@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:02:07 by edecoste          #+#    #+#             */
/*   Updated: 2023/01/06 13:37:57 by edecoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Utiliser des listes chainé

// sa (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a.
// Ne fait rien s’il n’y en a qu’un ou aucun.
void	move_sa(int *stack_a, int *stack_b)
{
	(void)stack_a;
	(void)stack_b;
}

// sb (swap b ) : Intervertit les 2 premiers éléments au sommet de la pile b.
// Ne fait rien s’il n’y en a qu’un ou aucun.
void	move_sb(int *stack_a, int *stack_b)
{
	(void)stack_a;
	(void)stack_b;
}

// ss : sa et sb en même temps.
void	move_ss(int *stack_a, int *stack_b)
{
	move_sa(stack_a, stack_b);
	move_sb(stack_a, stack_b);
}

// pa (push a) : Prend le premier élément au sommet de b et le met sur a.
// Ne fait rien si b est vide.
void	move_pa(int *stack_a, int *stack_b)
{
	(void)stack_a;
	(void)stack_b;
}
