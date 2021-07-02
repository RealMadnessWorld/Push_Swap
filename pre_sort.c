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
	return (tab);
}

long int	**tab_500(t_stack *stk_a, int size)
{
	int *tab;
	long int **tab500;
	int i;
	int j;
	int x;

	i = 0;
	x = 0;
	tab = malloc(sizeof(int) * size);
	tab500 = malloc(sizeof(int) * size);
	while (stk_a)
	{
		tab[i] = stk_a->content;
		stk_a = stk_a->next;
		i++;
	}
	i = 0;
	tab = pre_sort(tab, size);
	while (tab[i])
	{
		j = 0;
		while (j != size / 10)
		{
			tab500[x][j] = tab[i];
			j++;
			i++;
		}
		x++;
	}
	free(tab);
	return(tab500);
}

int	mediana(t_stack *stk_a, int size, t_data **chunks)
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
	i = 0;
	if (size <= 100)
	{
		while (i < size / 2)
			i++;
		i = tab[i];
	}
	else
	{
		printf("pre = %i\n", (*chunks)->chunks);
		(*chunks)->chunks = (*chunks)->chunks + (size / 10);
		i = tab[(*chunks)->chunks];
		printf("after = %i\n", (*chunks)->chunks);
	}
	free(tab);
	printf("devolve = %i\n", i);
	return (i);
}