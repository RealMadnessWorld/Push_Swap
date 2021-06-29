/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_boy_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:44:40 by jarsenio          #+#    #+#             */
/*   Updated: 2021/06/29 15:44:44 by jarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	actual_sort(t_stack **stk_a, t_stack **stk_b, t_data *data)
{
	int x;

	while (stk_b)
	{
		data->max = get_me_max(*stk_b);
		data->size = ft_lstsize(*stk_b);
		if (get_me_position(*stk_b, data->max) < data->size)
			x = 1;
		else
			x = 0;
		while (get_me_position(*stk_b, data->max) != 1)
		{
			if (x == 1)
				rb(stk_b, 1);
			else
				rrb(stk_b, 1);
		}
		pa(stk_a, stk_b);
	}
}

void	devide(t_stack **stk_a, t_stack **stk_b, t_data *data)
{
	while (ft_lstsize(*stk_a) > 3)
	{
		data->size = ft_lstsize(*stk_a);
		data->med = mediana(*stk_a, ft_lstsize(*stk_a));
		while (ft_lstsize(*stk_a) > data->size / 2)
		{
			if ((*stk_a)->content < data->med)
				pb(stk_a, stk_b);
			else
				ra(stk_a, 1);
		}
	}
	sort_three(stk_a, stk_b);
	actual_sort(stk_a, stk_b, data);
}

void	big_boi_sort(t_stack **stk_a)
{
	t_stack *stk_b;
	t_data	*data;

	data = 0;
	stk_b = NULL;
	if (is_sorted(*stk_a))
		return ;
	while (!is_sorted(*stk_a))
		devide(stk_a, &stk_b, data);
}