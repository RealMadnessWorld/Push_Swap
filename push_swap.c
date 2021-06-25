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

void	get_to_work(t_stack *stk_a)
{
	int i;

	if (ft_lstsize(stk_a) < 8)
		short_sort()
	// else
	// 	big_boi_sort();
}

int main(int argc, char **argv)
{
	t_stack *stk_a;

	if (argc < 3)
		return(write(1,"Error\n",6));
	stk_a = NULL;
	if (!(stk_a = convert_argv(argc, argv)))
		return (write(1,"Error\n",6));
	get_to_work(stk_a);
	while (stk_a)
	{
		printf("%i  ", stk_a->content);
		stk_a = stk_a->next;
	}
	printf("\n");
}