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

void	actual_sort(t_stack **stk_a, t_stack **stk_b)
{
	int x;
	int max;
	int size;

	while (*stk_b)
	{
		max = get_me_max(*stk_b);
		size = ft_lstsize(*stk_b);
		if (get_me_position(*stk_b, max) < size / 2)
			x = 1;
		else
			x = 0;
		while (get_me_position(*stk_b, max) != 0)
		{
			if (x == 1)
				rb(stk_b, 1);
			else
				rrb(stk_b, 1);
		}
		pa(stk_a, stk_b);
		//break ;
	}
}

void	devide_n_conquer500(t_stack **stk_a, t_stack **stk_b)
{
	int size;
	int perm_size;
	int med;
	int chunks;

	chunks = 0;
	while (ft_lstsize(*stk_a) > 3)
	{
		size = ft_lstsize(*stk_a);
		med = mediana(*stk_a, size, chunks);
		chunks = chunks + (perm_size / 10);
		while (size / 10 < size)
		{
			if ((*stk_a)->content < med)
				pb(stk_a, stk_b);
			else
				ra(stk_a, 1);
		}
	}
	sort_three(stk_a, stk_b);
	actual_sort(stk_a, stk_b);
}

void	devide_n_conquer(t_stack **stk_a, t_stack **stk_b)
{
	int size;
	int med;

	while (ft_lstsize(*stk_a) > 3)
	{
		size = ft_lstsize(*stk_a);
		med = mediana(*stk_a, ft_lstsize(*stk_a), 0);
		while (ft_lstsize(*stk_a) - 1 > size / 2)
		{
			if ((*stk_a)->content < med)
				pb(stk_a, stk_b);
			else
				ra(stk_a, 1);
			printf("betch\n");
		}
	}
	sort_three(stk_a, stk_b);
	actual_sort(stk_a, stk_b);
}

void	big_boi_sort(t_stack **stk_a)
{
	t_stack *stk_b;

	stk_b = NULL;
	if (is_sorted(*stk_a))
		return ;
	while (!is_sorted(*stk_a))
	{
		if (ft_lstsize(*stk_a) <= 100)
			devide_n_conquer(stk_a, &stk_b);
		else
			devide_n_conquer500(stk_a, &stk_b);
	}
}

		//sort(array, temp);
		// ps->chunks = ps->chunks + (temp / 10);
		// middle = array[ps->chunks];