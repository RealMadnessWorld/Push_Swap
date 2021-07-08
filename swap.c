/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 19:37:38 by jarsenio          #+#    #+#             */
/*   Updated: 2021/05/24 19:37:40 by jarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stk_a)
{
	if (!stk_a)
		return ;
	if (stk_a->next)
	{
		swap(&stk_a->content, &stk_a->next->content);
		ft_putstr("sa\n");
	}
}

void	sb(t_stack *stk_b)
{
	if (!stk_b)
		return ;
	if (stk_b->next)
	{
		swap(&stk_b->content, &stk_b->next->content);
		ft_putstr("sb\n");
	}
}

void	ss(t_stack *stk_a, t_stack *stk_b)
{
	if (!stk_a || !stk_b)
		return ;
	if (stk_a->next && stk_b->next)
	{
		swap(&stk_a->content, &stk_a->next->content);
		swap(&stk_b->content, &stk_b->next->content);
		ft_putstr("ss\n");
	}
}
