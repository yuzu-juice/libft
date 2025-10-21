#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (lst == NULL || *lst == NULL)
        return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}

// #include <stdio.h>
// void delete(void *str)
// {
// 	return ;
// }

// int main()
// {
// 	t_list *first = ft_calloc(1, sizeof(t_list));
// 	first->content = "first";
// 	first->next = NULL;

// 	t_list *new = ft_calloc(1, sizeof(t_list));
// 	new->content = "second";
// 	new->next = NULL;
// 	ft_lstadd_back(&first, new);

// 	ft_lstclear(&first, delete);
// 	printf("%p\n", first);

// 	return 0;
// }
