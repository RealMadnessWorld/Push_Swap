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

void	devide_n_conquer(t_stack **stk_a, t_stack **stk_b, t_data *data)
{
	while (ft_lstsize(*stk_a) > 3)
	{
		data->size = ft_lstsize(*stk_a);
		data->med = mediana(*stk_a, ft_lstsize(*stk_a));
		while (ft_lstsize(*stk_a) > data->size / 2)
		{
			if ((*stk_a)->content < data->med)
				pb(*stk_a, *stk_b);
		}
	}
}

int	big_boi_sort(t_stack **stk_a)
{
	t_stack *stk_b;
	t_data	*data;

	data = 0;
	stk_b = NULL;
	if (is_sorted(*stk_a))
		return ;
	while (!is_sorted(*stk_a))
	{
		devide_n_conquer(stk_a, stk_b, data);
	}
	
}