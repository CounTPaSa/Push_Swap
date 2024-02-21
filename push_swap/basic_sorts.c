/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merboyac <muheren2004@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 23:24:39 by merboyac          #+#    #+#             */
/*   Updated: 2024/01/24 15:06:46 by merboyac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_basic_sort_a(t_stack *stack)
{
	if (stack->a[0] > stack->a[1])
	{
		if (stack->b[0] < stack->b[1])
			ft_ss(stack);
		else
			ft_sa(stack);
	}
	return (1);
}

int	ft_basic_sorter_both(t_stack *stack, int size)
{
	while (size != 3 || !(stack->a[0] < stack->a[1]
			&& stack->a[1] < stack->a[2]))
	{
		if (stack->a[0] > stack->a[1])
		{
			if (stack->b[0] < stack->b[1])
				ft_ss(stack);
			else
				ft_sa(stack);
		}
		else if (size == 3 && !(stack->a[2] > stack->a[0]
				&& stack->a[2] > stack->a[1]))
			size = ft_push(stack, size, 0);
		else
		{
			size++;
			ft_pa(stack);
		}
	}
	return (1);
}

int	ft_basic_sort_b(t_stack *stack, int size)
{
	if (size == 2)
	{
		if (stack->b[0] < stack->b[1])
			ft_sb(stack);
		ft_pa(stack);
		ft_pa(stack);
	}
	else if (size == 3)
	{
		while (size || !(stack->a[0] < stack->a[1]
				&& stack->a[1] < stack->a[2]))
		{
			if (size == 1 && stack->a[0] > stack->a[1])
				ft_sa(stack);
			else if (size == 1 || (size >= 2 && stack->b[0] > stack->b[1])
				|| (size == 3 && stack->b[0] > stack->b[2]))
				size = ft_push(stack, size, 1);
			else
				ft_sb(stack);
		}
	}
	return (1);
}
