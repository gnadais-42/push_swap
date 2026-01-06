#include "../push_swap.h"

void	error(t_list **a, t_list **b, char *rule)
{
	ft_lstclear(a, free);
	ft_lstclear(b, free);
	free(rule);
	ft_putstr_fd(2, "Error\n");
	exit(1);
}
