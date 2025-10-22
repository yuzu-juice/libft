/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:46:16 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/22 15:39:57 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (lst == NULL)
		return ;
	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

// #include <stdio.h>
// #include <string.h>
// void replace_first_char_to_a(void *ptr)
// {
// 	char *str = ptr;
// 	str[0] = 'a';
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

// 	ft_lstiter(first, replace_first_char_to_a);
// 	printf("After apply:\n");
// 	printf("%s, %p\n", (char *)first->content, first->next);
// 	printf("%s, %p\n", (char *)first->next->content, first->next->next);

// 	return 0;
// }
