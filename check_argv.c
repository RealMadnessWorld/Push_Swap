
#include "push_swap.h"

int	triple_check(t_stack *list)
{
	t_stack *tmp;
	int xxx;

	tmp = list;
	xxx = tmp->content;
	while (list->next)
	{
		list = list->next;
		//printf("list = %-4i <-> xxx = %i\n", list->content, xxx);
		if (list->content == xxx)
			return (0);
	}
	if (tmp->next)
		triple_check(tmp->next);
	return (1);
}

int	check(char *s)
{
	int i;
	int leng;

	i = 0;
	leng = 0;
	if (((!ft_isdigit(s[i]) && (s[i] != '-' && s[i] != '+'))) || 
			(s[i] == '-' && (!ft_isdigit(s[i + 1])) || 
			((s[i] == '+' || s[i] == '-') && 
			(s[i + 1] == '-' || s[i + 1] == '+'))))
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == '+' || s[i] == '-')
			i++;
		if (!ft_isdigit(s[i]) || (leng > 10 && s[0] != '-' && (s[i] > '8' || ft_isdigit(s[i + 1]))) || (leng > 10 && s[0] == '+' && (s[i] > '7' || ft_isdigit(s[i + 1]))))
			return (0);
		i++;
		leng++;
	}
	return (1);
}

t_stack	*the_creator(int argc, char **argv, t_stack *head, int i)
{
	int xxx;

	while (i < argc)
	{
		if (!check(argv[i]))
		{
			if (head)
				be_free_my_child(head);
			return (0);
		}
		xxx = ft_atoi(argv[i]);
		{
			if (head)
				be_free_my_child(head);
			return (0);
		}
		ft_lstadd_back(&head, ft_lstnew(xxx));
		i++;
	}
	return (head);
}

t_stack *convert_argv(int argc, char **argv)
{
	t_stack *head;
	int i;
	
	head = NULL;
	i = 1;
	if (!(head = the_creator(argc, argv, head, i)))
		return (0);
	if (!triple_check(head))
	{
		printf("hi");
		be_free_my_child(head);
		return (0);
	}
	return (head);
}