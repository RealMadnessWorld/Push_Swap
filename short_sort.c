/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:07:55 by jarsenio          #+#    #+#             */
/*   Updated: 2021/06/28 16:18:08 by jarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	not_triplet(int size, t_stack **stk_a, t_stack **stk_b)
{
	int i;
	int x;

	i = 0;
	while (i < 2)
	{
		x = 0;
		if (get_me_position(*stk_a, get_me_min(*stk_a)) < size / 2)
			x = 1;
		while ((*stk_a)->content != get_me_min(*stk_a))
		{
			if (x == 1)
				ra(stk_a, 1);
			else
				rra(stk_a, 1);
		}
		pb(stk_a, stk_b);
		i++;
	}
}

void	short_sort(t_stack **stk_a)
{
	int size;
	t_stack *stk_b;

	stk_b = NULL;
	size = ft_lstsize(*stk_a);
	if (is_sorted(*stk_a))
		return ;
	if (size > 3)
		not_triplet(size, stk_a, &stk_b);
	while (!is_sorted(*stk_a))
	{
		if ((*stk_a)->content >= get_me_max(*stk_a))
			ra(stk_a, 1);
		else if ((*stk_a)->content > (*stk_a)->next->content)
			sa(*stk_a);
		else
			ra(stk_a, 1);
	}
	if (size > 3)
	{
		pa(stk_a, &stk_b);
		pa(stk_a, &stk_b);
	}
}