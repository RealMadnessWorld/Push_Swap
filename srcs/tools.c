/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 19:50:49 by jarsenio          #+#    #+#             */
/*   Updated: 2021/06/07 19:50:51 by jarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_atoi(const char *str)
{
	int neg;
	int n;

	n = 0;
	neg = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' ||
			*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		neg = 1;
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
		n = n * 10 + (*str++ - '0');
	if (neg == 1)
		return (-n);
	else
		return (n);
}

void	swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}