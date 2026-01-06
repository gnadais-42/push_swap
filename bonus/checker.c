#include "../push_swap.h"

static int	sorted(t_list *a);
static void	call_rule_no_print(t_list **a, t_list **b, char *rule);
static int	ft_strcmp(char *str1, char *str2);

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;
	char	*rule;

	a = parser(argc, argv);
	b = NULL;
	rule = get_next_line(0);
	while (rule)
	{
		call_rule_no_print(&a, &b, rule);
		rule = get_next_line(0);
	}
	if (sorted(a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	ft_lstclear(&a, free);
	return (0);
}

static int	sorted(t_list *a)
{
	int	previous;

	previous = INT_MIN;
	while (a)
	{
		if (*(int *)a->content < previous)
			return (0);
		previous = *(int *)a->content;
		a = a->next;
	}
	return (1);
}

static void	call_rule_no_print(t_list **a, t_list **b, char *rule)
{
	if (!ft_strcmp(rule, "sa\n"))
		swap(a);
	else if (!ft_strcmp(rule, "sb\n"))
		swap(b);
	else if (!ft_strcmp(rule, "ss\n"))
		ss(a, b);
	else if (!ft_strcmp(rule, "pa\n"))
		push(a, b);
	else if (!ft_strcmp(rule, "pb\n"))
		push(b, a);
	else if (!ft_strcmp(rule, "ra\n"))
		rotate(a);
	else if (!ft_strcmp(rule, "rb\n"))
		rotate(b);
	else if (!ft_strcmp(rule, "rr\n"))
		rr(a, b);
	else if (!ft_strcmp(rule, "rra\n"))
		revrotate(a);
	else if (!ft_strcmp(rule, "rrb\n"))
		revrotate(b);
	else if (!ft_strcmp(rule, "rrr\n"))
		rrr(a, b);
	else
		error(a, b, rule);
}

static int	ft_strcmp(char *str1, char *str2)
{
	if (!str1 && !str2)
		return (0);
	if (!str1)
		return (0 - *str2);
	if (!str2)
		return (*str1);
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
