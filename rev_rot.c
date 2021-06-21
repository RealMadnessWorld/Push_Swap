/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:03:09 by jarsenio          #+#    #+#             */
/*   Updated: 2021/06/20 22:03:14 by jarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **stk_a, int print)
{
	t_stack *tmp;
	t_stack *also_tmp;

	also_tmp = NULL;
	tmp = *stk_a;
	while (tmp)
	{
		if (tmp->next->next == NULL)
		{
			also_tmp = tmp->next;
			tmp->next = NULL;
			also_tmp->next = *stk_a;
			break ;
		}
		tmp = tmp->next;
	}
	*stk_a = also_tmp;
	if (print == 1)
		ft_putstr("rra\n");
}

void	rrb(t_stack **stk_b, int print)
{
	t_stack *tmp;
	t_stack *also_tmp;

	also_tmp = NULL;
	tmp = *stk_b;
	while (tmp)
	{
		if (tmp->next->next == NULL)
		{
			also_tmp = tmp->next;
			tmp->next = NULL;
			also_tmp->next = *stk_b;
			break ;
		}
		tmp = tmp->next;
	}
	*stk_b = also_tmp;
	if (print == 1)
		ft_putstr("rra\n");
}

void	rrr(t_stack **stk_a, t_stack **stk_b)
{
	rra(&stk_a, 0);
	rrb(&stk_b, 0);
	ft_putstr("rrr\n");
}