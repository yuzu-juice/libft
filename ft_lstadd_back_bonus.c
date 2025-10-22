#include "libft_bonus.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst == NULL || new == NULL)
		return ;
	tmp = ft_lstlast(*lst);
	tmp->next = new;
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
// 	ft_lstadd_back(&first, new);

// 	printf("%s, %p\n", (char *)first->content, first->next);
// 	printf("%s, %p\n", (char *)first->next->content, first->next->next);

// 	return 0;
// }
