/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <edecoste@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:13:09 by edecoste          #+#    #+#             */
/*   Updated: 2023/01/06 16:11:21 by edecoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "Libft/libft.h"

void	move_sa(int *stack_a, int *stack_b);
void	move_sb(int *stack_a, int *stack_b);
void	move_ss(int *stack_a, int *stack_b);
void	move_pa(int *stack_a, int *stack_b);
void	move_pb(int *stack_a, int *stack_b);
void	move_ra(int *stack_a, int *stack_b);
void	move_rb(int *stack_a, int *stack_b);
void	move_rr(int *stack_a, int *stack_b);
void	move_rra(int *stack_a, int *stack_b);
void	move_rrb(int *stack_a, int *stack_b);
void	move_rrr(int *stack_a, int *stack_b);
void	print_run(int *stack_a, int *stack_b, void (*move)(int *, int *), char *str);
int		ft_putstr(char *s);
int		ft_putchar(int c);
void	show_stack(int *stack);
void	arg_to_stack(int argc, char **argv);

#endif