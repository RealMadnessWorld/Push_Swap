
#include "push_swap.h"

void	devide_n_conquer500(t_stack **stk_a, t_stack **stk_b, t_data *chunks)
{
	int perm_size;
	int med;

	chunks->chunks = 0;
	perm_size = ft_lstsize(*stk_a);
	while (ft_lstsize(*stk_a) > 3)
	{
		med = mediana500(*stk_a, perm_size, chunks);
		while (get_me_min(*stk_a) < med)
		{
			if ((*stk_a)->content < med)
				pb(stk_a, stk_b);
			else
				ra(stk_a, 1);
		}
	}
	sort_three(stk_a, stk_b);
	actual_sort(stk_a, stk_b);
}