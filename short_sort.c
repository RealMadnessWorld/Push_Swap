/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:07:55 by jarsenio          #+#    #+#             */
/*   Updated: 2021/06/22 15:08:00 by jarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	short_sort(t_stack *stk_a)
{
	int size;
	t_stack *stk_b;

	size = ft_lstsize(stk_a);
	if (is_sorted(stk_a))
		return ;
	else
		printf("not sorted");
}