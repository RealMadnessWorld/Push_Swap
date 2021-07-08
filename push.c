/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:04:00 by jarsenio          #+#    #+#             */
/*   Updated: 2021/06/20 22:04:03 by jarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **stk_a, t_stack **stk_b)
{
	t_stack	*tmp;

	if (!stk_b)
		return ;
	tmp = *stk_b;
	*stk_b = (*stk_b)->next;
	tmp->next = *stk_a;
	*stk_a = tmp;
	ft_putstr("pa\n");
}

void	pb(t_stack **stk_a, t_stack **stk_b)
{
	t_stack	*tmp;

	if (!stk_a)
		return ;
	tmp = *stk_a;
	*stk_a = (*stk_a)->next;
	tmp->next = *stk_b;
	*stk_b = tmp;
	ft_putstr("pb\n");
}
