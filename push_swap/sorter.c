/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merboyac <muheren2004@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 23:24:46 by merboyac          #+#    #+#             */
/*   Updated: 2024/01/24 13:18:20 by merboyac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

int	ft_is_sorted(int *stack, int size, int flag)
{
	int	i;

	i = 0;
	while ((flag == 0) && (++i < size))
	{
		if (stack[i - 1] > stack[i])
			return (0);
	}
	while ((flag == 1) && (++i < size))
	{
		if (stack[i - 1] < stack[i])
			return (0);
	}
	return (1);
}

int	ft_sort(t_stack *stack, int size)
{
	if (size == 2)
		ft_sa(stack);
	else if (size == 3)
		ft_sort_three(stack);
	else
		ft_divide(stack, size);
	return (1);
}

int	ft_median(int *pivot, int *stack_a, int size)
{
	int	i;
	int	*tmp;

	tmp = (int *)malloc(sizeof(int) * size);
	if (!tmp)
		return (0);
	i = -1;
	while (++i < size)
		tmp[i] = stack_a[i];
	ft_bubble_sort(tmp, size);
	*pivot = tmp[size / 2];
	free(tmp);
	return (1);
}
