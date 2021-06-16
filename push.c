
#include "push_swap.h"

void    pa(t_stack **stk_a, t_stack **stk_b)
{
	t_stack *tmp;

	if (!stk_b)
		return ;
	tmp = *stk_b;
	*stk_b = (*stk_b)->next;
	tmp->next = *stk_a;
	*stk_a = tmp;
	ft_putstr("pa\n");
}

void    pb(t_stack **stk_a, t_stack **stk_b)
{
	t_stack *tmp;

	if (!stk_a)
		return ;
	tmp = *stk_a;
	*stk_a = (*stk_a)->next;
	tmp->next = *stk_b;
	*stk_b = tmp;
	ft_putstr("pb\n");
}