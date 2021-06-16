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
//typedef INT_MIN ;
//typedef INT_MAX ;

typedef struct s_stack
{
	int					content;
	struct s_stack		*next;
}				t_stack;

				/***Tools***/
int			ft_atoi(const char *str);
void		swap(int *a, int *b);
void		ft_putstr(char *s);

				/***linked lists***/
t_stack		*ft_lstlast(t_stack *lst);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack		*ft_lstnew(int content);
void		ft_lstadd_front(t_stack **lst, t_stack *new);

				/***Moves***/
void		sa(t_stack *stk_a);
void		sb(t_stack *stk_b);
void		ss(t_stack *stk_a, t_stack *stk_b);
void    	pa(t_stack **stk_a, t_stack **stk_b);
void    	pb(t_stack **stk_a, t_stack **stk_b);

#endif