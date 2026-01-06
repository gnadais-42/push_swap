#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;

	a = parser(argc, argv);
	b = NULL;
	turk(&a, &b);
	ft_lstclear(&a, free);
	return (0);
}
