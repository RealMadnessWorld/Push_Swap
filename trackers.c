/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trackers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:15:21 by jarsenio          #+#    #+#             */
/*   Updated: 2021/07/08 17:15:24 by jarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stk)
{
	while (stk->next)
	{
		if (stk->content > stk->next->content)
			return (0);
		stk = stk->next;
	}
	return (1);
}

int	get_me_max(t_stack *stk)
{
	int	max;

	max = -2147483648;
	while (stk)
	{
		if (stk->content > max)
			max = stk->content;
		stk = stk->next;
	}
	return (max);
}

int	get_me_min(t_stack *stk)
{
	int	min;

	min = 2147483647;
	while (stk)
	{
		if (stk->content < min)
			min = stk->content;
		stk = stk->next;
	}
	return (min);
}

int	get_me_position(t_stack *stk, int num)
{
	int	pos;

	pos = 0;
	while (stk->content != num)
	{
		pos++;
		stk = stk->next;
	}
	return (pos);
}
