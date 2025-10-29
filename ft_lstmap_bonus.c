/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:46:16 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/29 17:01:01 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*ret;
	t_list	*new;

	if (f == NULL || del == NULL)
		return (NULL);
	ret = ft_lstnew(f(lst->content));
	if (ret == NULL)
		return (NULL);
	tmp = lst->next;
	while (tmp)
	{
		new = ft_lstnew(f(tmp->content));
		if (new == NULL)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, new);
		tmp = tmp->next;
	}
	return (ret);
}

// #include <stdio.h>
// #include <string.h>
// void *replace_first_char_to_a(void *ptr)
// {
//     char *original_str = (char *)ptr;

//     char *new_str = strdup(original_str);
//     if (new_str == NULL) {
//         return (NULL);
//     }
// 	new_str[0] = 'a';

//     return ((void *)new_str);
// }

// void delete(void *str)
// {
// 	free(str);
// }

// int main()
// {
// 	t_list *first = ft_calloc(1, sizeof(t_list));
// 	first->content = strdup("first");
// 	first->next = NULL;

// 	t_list *new = ft_calloc(1, sizeof(t_list));
// 	new->content = strdup("second");
// 	new->next = NULL;
// 	ft_lstadd_back(&first, new);

// 	printf("Before apply:\n");
// 	printf("%s, %p\n", (char *)first->content, first->next);
// 	printf("%s, %p\n", (char *)first->next->content, first->next->next);

// 	t_list *map = ft_lstmap(first, replace_first_char_to_a, delete);
// 	printf("After apply:\n");
// 	printf("%s, %p\n", (char *)map->content, map->next);
// 	printf("%s, %p\n", (char *)map->next->content, map->next->next);

// 	return 0;
// }
