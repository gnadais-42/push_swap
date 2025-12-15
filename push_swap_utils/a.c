#include "../push_swap.h"

void	swap(t_list **stack);

int	main(void)
{
	t_list	*a;
	t_list	*b;
	int	n1;
	int	n2;

	n1 = 1;
	n2 = 2;
	a = ft_lstnew(&n1);
	b = ft_lstnew(&n2);
	ft_lstadd_back(&a, b);
	t_list	*test = a;
	while (test)
	{
		ft_printf("%d ", *(int *)test->content);
		test = test->next;
	}
	ft_printf("\n");
	swap(&a);
	while (a)
	{
		ft_printf("%d ", *(int *)a->content);
		a = a->next;
	}
}
