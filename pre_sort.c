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

void	print_array(long int *array, int size)
{
	int i = 0;

	while (i < size)
	{
		printf("%ld \n", array[i]);
		i++;
	}
}

void	pre_sort(int *tab, int size)
{
	int i;
	int tmp;

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

// long int	**tab_500(t_stack *stk_a, int size)
// {
// 	int *tab;
// 	long int *tab500[size / 10];
// 	int i;
// 	int j;
// 	int x;

// 	i = 0;
// 	x = 0;
// 	tab = malloc(sizeof(int) * size);
// 	while (stk_a)
// 	{
// 		tab[i] = stk_a->content;
// 		// printf("tab[i] = %d\n\n", tab[i]);
// 		stk_a = stk_a->next;
// 		i++;
// 	}
// 	i = 0;
// 	tab = pre_sort(tab, size);
// 	tab500 = malloc(sizeof(long int) * size);
// 	while (tab[i])
// 	{
// 		j = 0;
// 		while (j != size / 10)
// 		{
// 			tab500[x][j] = tab[i];
// 			j++;
// 			i++;
// 			// printf("tab[i] = %d\n\n", tab[i]);
// 		}
// 		x++;
// 	}
// 	free(tab);
// 	return(tab500);
// }

int	mediana500(t_stack *stk_a, int size, t_data *chunks)
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
	pre_sort(tab, size);
	chunks->chunks = chunks->chunks + (size / 10);
	i = tab[chunks->chunks];
	return (i);
}

int	mediana(t_stack *stk_a, int size)
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
	pre_sort(tab, size);
	i = 0;
	while (i < size / 2)
		i++;
	i = tab[i];
	free(tab);
	printf("devolve = %i\n", i);
	return (i);
}