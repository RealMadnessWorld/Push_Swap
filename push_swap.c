/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 17:18:01 by jarsenio          #+#    #+#             */
/*   Updated: 2021/06/11 17:18:03 by jarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack *stk_a;
	t_stack *stk_b;

	if (argc < 3)
		return(write(1,"Error\n",6));
	stk_a = NULL;
	stk_b = NULL;

	if (!(stk_a = convert_argv(argc, argv)))
	{
		write(1,"Error\n",6);
		return (0);
	}

	while (stk_a)
	{
		printf("-%i-", stk_a->content);
		stk_a = stk_a->next;
	}
	printf("\n");
}