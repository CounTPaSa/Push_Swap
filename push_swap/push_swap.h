/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merboyac <muheren2004@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 23:24:18 by merboyac          #+#    #+#             */
/*   Updated: 2024/01/24 10:41:04 by merboyac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
}	t_stack;

void	ft_free_argv(char **argv, t_stack *stack, int control);
void	ft_error(t_stack *stack);

void	ft_push_swap(char **av, int control);

int		ft_divide(t_stack *stack, int len);
int		ft_quicksort_a(t_stack *stack, int len, int count);
int		ft_quicksort_b(t_stack *stack, int len, int count);

void	ft_pa(t_stack *stack);
void	ft_sa(t_stack *stack);
void	ft_ra(t_stack *stack);
void	ft_rra(t_stack *stack);

void	ft_pb(t_stack *stack);
void	ft_sb(t_stack	*stack);
void	ft_rb(t_stack	*stack);
void	ft_rrb(t_stack *stack);

void	ft_ss(t_stack	*stack);
void	ft_rr(t_stack	*stack);
void	ft_rrr(t_stack *stack);

int		ft_push(t_stack *stack, int len, int operation);
int		ft_sort_three(t_stack *s);
void	ft_bubble_sort(int *tmp_stack, int size);
int		ft_median(int *pivot, int *stack_a, int size);

int		ft_basic_sort_a(t_stack *s);
int		ft_basic_sorter_both(t_stack *s, int len);
int		ft_basic_sort_b(t_stack *s, int len);

int		ft_is_sorted(int *stack, int size, int flag);
int		ft_sort(t_stack *stack, int size);
void	ft_check_repeat(t_stack *stack, int size, char **argv, int check);
void	ft_check_args(char **argv);

int		ft_is_num(char *s);
int		ft_mda_strlen(char **str);
int		ft_mda_atoi(char *str, t_stack *stack, char **argv, int check);

#endif
