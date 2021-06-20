
#include "push_swap.h"

void	ra(t_stack **stk_a, int print)
{
	t_stack *tmp;
	t_stack *also_tmp;

	if (!(*stk_a) || !((*stk_a)->next))
		return ;
	tmp = *stk_a;
	also_tmp = (*stk_a)->next;
	while ((*stk_a)->next)
		*stk_a = (*stk_a)->next;
	tmp->next = NULL;
	(*stk_a)->next = tmp;
	*stk_a = also_tmp;
	if (print = 1)
		ft_putstr("ra\n");
}

void    rb(t_stack **stk_b, int print)
{
	t_stack *tmp;
	t_stack *also_tmp;

	if (!(*stk_b) || !((*stk_b)->next))
		return ;
	tmp = *stk_b;
	also_tmp = (*stk_b)->next;
	while ((*stk_b)->next)
		*stk_b = (*stk_b)->next;
	tmp->next = NULL;
	(*stk_b)->next = tmp;
	*stk_b = also_tmp;
	if (print = 1)
		ft_putstr("rb\n");
}

void	rr(t_stack **stk_a, t_stack **stk_b)
{
	ra(stk_a, 0);
	rb(stk_b, 0);
	ft_putstr("rr\n");
}