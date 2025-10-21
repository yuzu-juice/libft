/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:39:55 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/21 11:46:32 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// #include <stdio.h>

// void ft_replace_with_star(unsigned int index, char *c) {
// 	(void)index;
// 	*c = '*';
// }

// int main()
// {
// 	char str1[] = "Hello";
// 	ft_striteri(str1, &ft_replace_with_star);
// 	printf("%s\n", str1);

// 	char str2[] = "Hello";
// 	ft_striteri(str2, NULL);
// 	printf("%s\n", str2);

// 	ft_striteri(NULL, &ft_replace_with_star);
// 	printf("%s\n", NULL);

// 	ft_striteri(NULL, NULL);
// 	printf("%s\n", NULL);
// 	return (0);
// }
