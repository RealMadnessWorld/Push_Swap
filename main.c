/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 19:30:44 by jarsenio          #+#    #+#             */
/*   Updated: 2021/05/24 19:30:46 by jarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*conv(int argc, char **argv, int *stack_a)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i < argc - 1)
	{
		stack_a[i] = ft_atoi(argv[j]);
		j++;
		i++;
	}
	//stack_a[i] = '\0';
	return (stack_a);
}

int main(int argc, char **argv)
{
	int size = argc - 1;
	int stack_a[size];
	//int stack_b[size];
	int i = 0;

	//size = argc - 1;
	conv(argc, argv, stack_a);
	printf("hi\n");
	while (i < argc - 1)
	{	
		printf("%i\n", stack_a[i]);
		i++;
	}
}