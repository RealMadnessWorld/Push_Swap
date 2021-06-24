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

int	*pre_sort(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
	// i = 0;
	// while (i < size)
	// {
	// 	printf("ordered :%i\n", tab[i]);
	// 	i++;
	// }
	return (tab);
}

void	mediana(t_stack *stk_a, int size)
{
	int *tab;
	int i;

	i = 0;
	tab = malloc(sizeof(int) * size);
	while (stk_a)
	{
		tab[i] = stk_a->content;
		stk_a = stk_a->next;
		i++;
	}
	tab = pre_sort(tab, size);
}