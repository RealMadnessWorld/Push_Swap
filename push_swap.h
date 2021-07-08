/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 19:37:09 by jarsenio          #+#    #+#             */
/*   Updated: 2021/05/24 19:37:12 by jarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int					content;
	struct s_stack		*next;
}				t_stack;

typedef struct s_data
{
	int chunks;
}			t_data;

				/***Tracking***/
int			is_sorted(t_stack *stk);
int			is_rev_sorted(t_stack *stk);
int			get_me_max(t_stack *stk);
int			get_me_min(t_stack *stk);
int			get_me_position(t_stack *stk, int num);

				/***Algorythm***/
void		short_sort(t_stack **stk_a);
void		not_triplet(int size, t_stack **stk_a, t_stack **stk_b);
int			mediana(t_stack *stk_a, int size, t_data *chunks);
void		pre_sort(int *tab, int size);
void		sort_three(t_stack **stk_a, t_stack **stk_b);
int			big_boi_sort(t_stack **stk_a);
void		devide_n_conquer(t_stack **stk_a, t_stack **stk_b, t_data *chunks);
void		actual_sort(t_stack **stk_a, t_stack **stk_b);
void		devide_n_conquer500(t_stack **stk_a, t_stack **stk_b, t_data *chunks);
int			mediana500(t_stack *stk_a, int size, t_data *chunks);

				/***Convert Args***/
t_stack 	*convert_argv(int argc, char **argv);
t_stack		*the_creator(int argc, char **argv, t_stack *head, int i);
int			check(char *s, int i, int leng);
int			check_dup(t_stack *list);

				/***Tools***/
long int	ft_atoi(const char *str);
void		swap(int *a, int *b);
void		ft_putstr(char *s);
int			ft_isdigit(int c);

				/***linked lists***/
t_stack		*ft_lstlast(t_stack *lst);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack		*ft_lstnew(int content);
void		be_free_my_child(t_stack *lst);
int			ft_lstsize(t_stack *lst);

				/***Moves***/
void		sa(t_stack *stk_a);
void		sb(t_stack *stk_b);
void		ss(t_stack *stk_a, t_stack *stk_b);
void		pa(t_stack **stk_a, t_stack **stk_b);
void		pb(t_stack **stk_a, t_stack **stk_b);
void		ra(t_stack **stk_a, int print);
void		rb(t_stack **stk_b, int print);
void		rr(t_stack **stk_a, t_stack **stk_b);
void		rra(t_stack **stk_a, int print);
void		rrb(t_stack **stk_b, int print);
void		rrr(t_stack **stk_a, t_stack **stk_b);

#endif