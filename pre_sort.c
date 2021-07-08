/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 19:04:20 by jarsenio          #+#    #+#             */
/*   Updated: 2021/06/24 19:04:23 by jarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pre_sort(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}

int	mediana500(t_stack *stk_a, int size, t_data *chunks)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * size);
	while (stk_a)
	{
		tab[i] = stk_a->content;
		stk_a = stk_a->next;
		i++;
	}
	pre_sort(tab, size);
	chunks->chunks = chunks->chunks + (size / 20);
	i = tab[chunks->chunks];
	free(tab);
	return (i);
}

int	mediana(t_stack *stk_a, int size, t_data *chunks)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * size);
	while (stk_a)
	{
		tab[i] = stk_a->content;
		stk_a = stk_a->next;
		i++;
	}
	pre_sort(tab, size);
	chunks->chunks = chunks->chunks + (size / 2);
	i = tab[chunks->chunks];
	free(tab);
	return (i);
}
