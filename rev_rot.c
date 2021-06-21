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
	while (tmp->next)
	{
		if (tmp->next->next == NULL)
		{
			also_tmp = tmp->next;
			also_tmp->next = NULL;
		}
		tmp = tmp->next;
	}
	tmp = also_tmp;
	tmp->next = *stk_a;
	if (print == 1)
		ft_putstr("rra\n");
}
