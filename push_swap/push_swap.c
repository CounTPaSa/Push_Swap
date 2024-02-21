/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merboyac <muheren2004@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 23:24:08 by merboyac          #+#    #+#             */
/*   Updated: 2024/01/24 10:40:03 by merboyac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <stdlib.h>

void	ft_push_swap(char **argv, int check)
{
	t_stack	*stack;
	int		size;
	int		i;

	i = -1;
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return ;
	size = ft_mda_strlen(argv);
	stack->a = malloc(sizeof(int) * size);
	if (!stack->a)
		return (free(stack));
	stack->size_a = size;
	stack->b = malloc(sizeof(int) * size);
	if (!stack->b)
		return (free(stack->a), free(stack), exit(0));
	stack->size_b = 0;
	while (++i < size)
		stack->a[i] = ft_mda_atoi(argv[i], stack, argv, check);
	ft_check_repeat(stack, size, argv, check);
	if (!ft_is_sorted(stack->a, size, 0))
		ft_sort(stack, size);
	free(stack->a);
	free(stack->b);
	free(stack);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
		return (1);
	if (argc == 2)
	{
		argv++;
		argv = ft_split(*argv, ' ');
		if (!argv)
			return (1);
		ft_push_swap(argv, 1);
		while (argv[i])
			free(argv[i++]);
		free(argv);
	}
	else
		ft_push_swap(++argv, 0);
	return (0);
}
