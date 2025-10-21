/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:39:55 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/21 11:43:34 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f((unsigned int)i, s[i]);
		i++;
	}
	return (str);
}

// #include <stdio.h>

// char ft_replace_with_star(unsigned int index, char c) {
// 	(void)index;
// 	c = '*';
// 	return (c);
// }

// int main()
// {
// 	char *s = "Hello";
// 	char *str1 = ft_strmapi(s, &ft_replace_with_star);
// 	printf("%s\n", str1);
// 	char *str2 = ft_strmapi(s, NULL);
// 	printf("%s\n", str2);
// 	char *str3 = ft_strmapi(NULL, &ft_replace_with_star);
// 	printf("%s\n", str3);
// 	char *str4 = ft_strmapi(NULL, NULL);
// 	printf("%s\n", str4);
// 	return (0);
// }
