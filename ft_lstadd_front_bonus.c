#include "libft_bonus.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = &*lst;
	*lst = &new;
	new->next = tmp;
}

int main()
{
	t_list *first = ft_calloc(1, sizeof(t_list));
	first->content = "test";
	first->next = NULL;

	t_list *new = ft_calloc(1, sizeof(t_list));
	new->content = "new";
	new->next = NULL;
	ft_lstadd_front(&first, new);

	printf("%s, %p\n", first->content, first->next);
	printf("%s, %p\n", first->next->content, first->next->next);

	return 0;
}
