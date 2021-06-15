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

t_stack *convert_argv(int argc, char **argv)
{
	t_stack *head;
	int i;
	
	head = NULL;
	i = 1;
	while (i < argc)
	{
		ft_lstadd_back(&head, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	return (head);
}

int main(int argc, char **argv)
{
	t_stack *stk_a;
	//t_stack *stk_b;

	if (argc < 3)
		return(write(1,"Error\n",6));
	stk_a = NULL;
	//stk_b = NULL;

	stk_a = convert_argv(argc, argv);
	while (stk_a)
	{
		printf("-%i-", stk_a->content);
		stk_a = stk_a->next;
	}
	printf("\n");
}