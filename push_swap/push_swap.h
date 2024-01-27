/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:47:25 by egermen           #+#    #+#             */
/*   Updated: 2024/01/23 14:42:46 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_free
{
	int		i;
}	t_free;

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_stack;

void	ft_error(t_stack *stack, char **av, t_free *fre);
int		ft_ps_strlen(char **str);
int		ft_ps_atoi(char *str, t_stack *stack, char **av, t_free *fre);
void	ft_check_repeat(int size, t_stack *stack, char **str,
			t_free *fre);
int		ft_checked_sorted(int *stack_a, int size, int flag);
int		ft_sort(t_stack *stack, int size);
void	ft_sort_three(t_stack *s);
void	ft_sort_int_tmp(int *tmp_stack, int size);
void	ft_quicksort_3(t_stack *stack, int len);
int		ft_sort_small_b(t_stack *s, int len);
int		ft_push(t_stack *stack, int len, int operation);
int		ft_get_middle(int *pivot, int *stack_a, int size);
int		ft_quicksort_a(t_stack *stack, int len, int count);
int		ft_quicksort_b(t_stack *stack, int len, int count);
void	sa(t_stack *stack, int print);
void	rra(t_stack *stack, int print);
void	ra(t_stack *stack, int print);
void	pa(t_stack *stack, int print);
void	pb(t_stack *stack, int print);
void	sb(t_stack	*stack, int print);
void	rb(t_stack	*stack, int print);
void	rrb(t_stack *stack, int print);
void	ft_push_swap(char **av, t_free *fre);
int		ft_strlen(char *a, t_stack *stack, char **av, t_free *fre);
void	free_data(char **data);
int		ft_strcmp(char *s1, char *s2);
int		av_control(char **av);
char	**ft_split(char const *s, char c);
char	**ft_no_malloc(char **tab);

#endif
