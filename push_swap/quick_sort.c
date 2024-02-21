/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merboyac <muheren2004@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 23:24:24 by merboyac          #+#    #+#             */
/*   Updated: 2024/01/24 14:53:40 by merboyac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_divide(t_stack *stack, int size)
{
	int	pivot_a;
	int	pivot_b;
	int	items;

	items = size;
	ft_median(&pivot_a, stack->a, size);
	while (size != (items + 1) / 2)
	{
		if (stack->a[0] < pivot_a && (size--))
		{
			ft_pb(stack);
		}
		else
		{
			ft_median(&pivot_b, stack->b, stack->size_b);
			if ((stack->b[0] <= pivot_b) && (stack->size_b > 2))
				ft_rr(stack);
			else
				ft_ra(stack);
		}
	}
	ft_quicksort_a(stack, (items + 1) / 2, 0);
	ft_quicksort_b(stack, items / 2, 0);
	return (1);
}

int	ft_quicksort_a(t_stack *stack, int size, int count)
{
	int	pivot_a;
	int	items;

	if (ft_is_sorted(stack->a, size, 0) == 1)
		return (1);
	if (size == 2)
		return (ft_basic_sort_a(stack));
	else if (size == 3 && stack->size_a == 3)
		return (ft_sort_three(stack));
	else if (size == 3)
		return (ft_basic_sorter_both(stack, size));
	ft_median(&pivot_a, stack->a, size);
	items = size;
	while (size != (items + 1) / 2)
	{
		if (stack->a[0] < pivot_a && (size--))
			ft_pb(stack);
		else if (++count)
			ft_ra(stack);
	}
	while ((items + 1) / 2 != stack->size_a && count--)
		ft_rra(stack);
	return (ft_quicksort_a(stack, (items + 1) / 2, 0),
		ft_quicksort_b(stack, items / 2, 0));
}

int	ft_quicksort_b(t_stack *stack, int size, int count)
{
	int	pivot_b;
	int	items;

	if (!count && ft_is_sorted(stack->b, size, 1) == 1)
		while (size--)
			ft_pa(stack);
	if (size <= 3)
		return (ft_basic_sort_b(stack, size));
	ft_median(&pivot_b, stack->b, size);
	items = size;
	while (size != items / 2)
	{
		if (stack->b[0] >= pivot_b && (size--))
			ft_pa(stack);
		else if (++count)
			ft_rb(stack);
	}
	while (items / 2 != stack->size_b && count--)
		ft_rrb(stack);
	return (ft_quicksort_a(stack, (items + 1) / 2, 0),
		ft_quicksort_b(stack, items / 2, 0));
	return (1);
}
