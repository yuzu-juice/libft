/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:51:46 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/19 21:22:09 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	const char	*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	str = s;
	while (true)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>
// int	main(){
// 	const char s[] = "test string";
// 	int	c = 'a';
// 	printf("%p, %p\n", strchr(s, c), ft_strchr(s, c));

// 	c = 's';
// 	printf("%p, %p\n", strchr(s, c), ft_strchr(s, c));

// 	const char s1[] = "";
// 	c = 0;
// 	printf("%p, %p\n", strchr(s1, c), ft_strchr(s1, c));

// 	c = '\0';
// 	printf("%p\n", ft_strchr(NULL, c));
// }
