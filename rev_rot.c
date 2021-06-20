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
	t_stack tmp;
	t_stack also_tmp;

	also_tmp = *stk_a;
	while (*stk_a)
	{
		*stk_a = (*stk_a)->next;
	}
	tmp = 

}
