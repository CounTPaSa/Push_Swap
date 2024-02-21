/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freeeeee.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merboyac <muheren2004@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 23:23:25 by merboyac          #+#    #+#             */
/*   Updated: 2024/01/24 10:40:25 by merboyac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_free_argv(char **argv, t_stack *stack, int control)
{
	int	i;

	i = 0;
	if (control == 1)
	{
		while (argv[i])
		{
			free(argv[i]);
			i++;
		}
		free(argv);
	}
	ft_error(stack);
}

void	ft_error(t_stack *stack)
{
	free (stack->a);
	free (stack->b);
	free (stack);
	write(2, "Error\n", 6);
	exit (1);
}
