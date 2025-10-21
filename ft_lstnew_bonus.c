#include "libft_bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = ft_calloc(1, sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// #include <stdio.h>
// int main()
// {
// 	t_list *node;
// 	char str[] = "hoge";

// 	node = ft_lstnew(str);
// 	printf("content: %s, next: %p\n", (char *)node->content, node->next);
// 	return 0;
// }
