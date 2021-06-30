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

void	get_to_work(t_stack **stk_a)
{
	int i;

	if (ft_lstsize(*stk_a) < 8)
		short_sort(stk_a);
	else if (ft_lstsize(*stk_a) <= 100)
		big_boi_sort(stk_a);
	else
		big_boi_sort(stk_a);
}

int main(int argc, char **argv)
{
	t_stack *stk_a;
	t_stack *tmp;

	if (argc < 3)
		return(write(1,"Error\n",6));
	stk_a = NULL;
	if (!(stk_a = convert_argv(argc, argv)))
		return (write(1,"Error\n",6));
	get_to_work(&stk_a);
	tmp = stk_a;
	// while (tmp)
	// {
	// 	printf("*%i*", tmp->content);
	// 	tmp = tmp->next;
	// }
	// printf("\n");
	be_free_my_child(stk_a);
	return 0;
}