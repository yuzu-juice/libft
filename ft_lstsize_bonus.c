#include "libft_bonus.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		count;

	if (lst == NULL)
		return (0);
	count = 1;
	tmp = lst;
	while (tmp->next)
	{
		++count;
		tmp = tmp->next;
	}
	return (count);
}

// #include <stdio.h>
// int main()
// {
// 	t_list *first = ft_calloc(1, sizeof(t_list));
// 	first->content = "first";
// 	first->next = NULL;

// 	t_list *new = ft_calloc(1, sizeof(t_list));
// 	new->content = "new";
// 	new->next = NULL;
// 	ft_lstadd_front(&first, new);

// 	printf("%d\n", ft_lstsize(first));

// 	return 0;
// }
