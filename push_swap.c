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
	t_stack *stack_a;
	t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;

	stack_a = convert_argv(argc, argv);
	while (stack_a)
	{
		printf("-%i-", stack_a->content);
		stack_a = stack_a->next;
	}
}