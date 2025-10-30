/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:46:16 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/22 15:43:44 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (lst == NULL || *lst == NULL || del == NULL)
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
