/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 19:04:07 by jarsenio          #+#    #+#             */
/*   Updated: 2021/06/24 19:04:11 by jarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dup(t_stack *list)
{
	t_stack *tmp;
	int xxx;

	while (list->next)
	{
		tmp = list;
		while (tmp->next)
		{
			xxx = list->content;
			tmp = tmp->next;
			if (xxx == tmp->content)
				return (0);	
		}
		list = list->next;
	}
	return (1);
}

int	check(char *s, int i, int leng)
{
	while (s[i] != '\0')
	{
		if (((!ft_isdigit(s[i]) && (s[i] != '-' && s[i] != '+'))) || 
				(s[i] == '-' && (!ft_isdigit(s[i + 1])) || 
				((s[i] == '+' || s[i] == '-') && 
				(s[i + 1] == '-' || s[i + 1] == '+'))))
			return (0);
		if (s[i] == '+' || s[i] == '-')
				i++;
		while (ft_isdigit(s[i]))
		{
			leng++;
			if (!ft_isdigit(s[i]))
				return (0);
			if (leng > 10)
				return (0);
			i++;
		}
	}
	return (1);
}

t_stack	*the_creator(int argc, char **argv, t_stack *head, int i)
{
	long int xxx;

	while (i < argc)
	{
		if (!check(argv[i], 0, 0))
		{
			printf("failed first check\n");
			if (head)
				be_free_my_child(head);
			return (0);
		}
		xxx = ft_atoi(argv[i]);
		if (xxx < -2147483648 || xxx > 2147483647)
			return (0);
		ft_lstadd_back(&head, ft_lstnew(xxx));
		i++;
	}
	return (head);
}

t_stack *convert_argv(int argc, char **argv)
{
	t_stack *head;
	int i;
	
	head = NULL;
	i = 1;
	if (!(head = the_creator(argc, argv, head, i)))
		return (0);
	if (!check_dup(head))
	{
		be_free_my_child(head);
		return (0);
	}
	return (head);
}
