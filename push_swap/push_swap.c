/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <edecoste@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:31:53 by edecoste          #+#    #+#             */
/*   Updated: 2023/01/06 17:21:38 by edecoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;
	int *stack_b;
	int *stack_a;

	i = 0;
	stack_b = ft_calloc(sizeof(int), argc);
	stack_a = ft_calloc(sizeof(int), argc);
	while (++i < argc)
	{
		stack_a[i - 1] = ft_atoi(argv[i]);
	}
	// ft_printf("%d\n", stack_a[3]);
	// ft_printf("%s", argv[5]);
	// show_stack(stack_a);
	arg_to_stack(argc, argv);
}

int	count_total_arg(int argc, char **argv)
{
	int	i;
	int	rt;

	i = 0;
	rt = 0;
	while (++i < argc)
	{
		rt += count_word(argv[i], ' ');
	}
	return (rt);
}

void	arg_to_stack(int argc, char **argv)
{
	int	i;
	int	j;
	int *stack;

	i = 0;
	stack = ft_calloc(count_total_arg(argc, argv), sizeof(int));
	ft_printf("[%d]", count_total_arg(argc, argv));
	while (++i < argc)
	{
		char **splited;
		j = 0;
		splited = ft_split(argv[i], ' ');
		while (splited[j++])
			stack[i + j - 2] = ft_atoi(splited[j - 1]);
	}
	ft_printf("%d, ", stack[0]);
	ft_printf("%d, ", stack[1]);
	ft_printf("%d, ", stack[2]);
	ft_printf("%d, ", stack[3]);
	ft_printf("%d, ", stack[4]);
	ft_printf("%d, ", stack[5]);
	show_stack(stack);
}

void	print_run(int *stack_a, int *stack_b, void (*move)(int *, int *), char *str)
{
	ft_putstr(str);
	move(stack_a, stack_b);
}

int	ft_putstr(char *s)
{
	size_t	i;
	int		rt_val;

	i = 0;
	rt_val = 0;
	if (!s)
		i = ft_putstr("(null)");
	else
	{
		while (s[i])
		{
			rt_val = ft_putchar(s[i++]);
			if (rt_val == -1)
				return (rt_val);
		}
	}
	return (i);
}

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}