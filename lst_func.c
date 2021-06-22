/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:11:47 by jarsenio          #+#    #+#             */
/*   Updated: 2021/06/11 18:11:51 by jarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_stack		*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack *temp;

	if (!new)
		return ;
	temp = ft_lstlast(*lst);
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp->next = new;
}

void	be_free_my_child(t_stack *lst)
{
	t_stack *tmp;
	while (lst)
	{
		tmp = lst;
		if (tmp)
			free(tmp);
		lst = lst->next;
	}
	lst = NULL;
}