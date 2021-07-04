
#include "push_swap.h"

void	deal_with_chunks(t_stack **stk_a, t_stack **stk_b, int div, t_data *chunks)
{
	int size;
	int med;
	int i;

	size = ft_lstsize(*stk_a);
	i = size / div;
	printf("hell\n");
	med = mediana500(*stk_a, ft_lstsize(*stk_a), chunks);
	while (ft_lstsize(*stk_b) < size / div)
	{
		if ((*stk_a)->content < med)
			pb(stk_a, stk_b);
		else
			ra(stk_a, 0);
		//printf("med = %i && stk_a = %i\n", med, (*stk_a)->content);
	}
}

void	devide_n_conquer500(t_stack **stk_a, t_stack **stk_b, t_data *chunks)
{
	int size;
	int perm_size;
	int med;
	int i;

	perm_size = ft_lstsize(*stk_a);
	med = mediana500(*stk_a, perm_size, chunks);
	i = 10;
	while (ft_lstsize(*stk_a) > 3)
	{
		size = ft_lstsize(*stk_a);
		while (i > 0)
		{
			printf("hi\n");
			deal_with_chunks(stk_a, stk_b, i, chunks);
			i--;
		}
	}
	sort_three(stk_a, stk_b);
	actual_sort(stk_a, stk_b);
}