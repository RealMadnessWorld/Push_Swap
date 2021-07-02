
#include "push_swap.h"

// void	deal_with_chunks(t_stack **stk_a, t_stack **stk_b, int div, t_data **chunks)
// {
// 	int size;
// 	int med;
// 	int i;

// 	size = ft_lstsize(*stk_a);
// 	i = size / div;
// 	med = mediana(*stk_a, ft_lstsize(*stk_a), chunks);
// 	while (ft_lstsize(*stk_a) > size / 10)
// 	{
// 		if ((*stk_a)->content < med)
// 			pb(stk_a, stk_b);
// 		else
// 			ra(stk_a, 1);
// 		printf("med = %i && stk_a = %i\n", med, (*stk_a)->content);
// 	}
// }
void	deal_with_chunks(t_stack **stk_a, t_stack **stk_b, long int **tab, int x, int size)
{
	int i;

	while (!overpowered(tab[x]) && ft_lstsize(*stk_a) > 3)
	{
		i = 0;
		while(tab[x][i])
		{
			if ((*stk_a)->content == tab[x][i])
			{
				tab[x][i] = 11111111111;
				pb(*stk_a, *stk_b);
			}
			i++;
			ra(*stk_a, 1);
		}
	}
}

void	devide_n_conquer500(t_stack **stk_a, t_stack **stk_b, t_data **chunks)
{
	long int **tab;
	int size;
	int perm_size;
	int med;
	int i;

	tab = tab_500(stk_a, perm_size);
	i = 0;
	perm_size = ft_lstsize(*stk_a);
	while (ft_lstsize(*stk_a) > 3)
	{
		size = ft_lstsize(*stk_a);
		while (i != 10 && ft_lstsize(*stk_a) > 3)
		{
			deal_with_chunks(stk_a, stk_b, tab, i, perm_size);
			i++;
		}
	}
	sort_three(stk_a, stk_b);
	actual_sort(stk_a, stk_b);
	free(tab);
}