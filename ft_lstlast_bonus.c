#include "libft_bonus.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = lst;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
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

// 	printf("%s, %p\n", (char *)ft_lstlast(first)->content, ft_lstlast(first)->next);

// 	return 0;
// }
