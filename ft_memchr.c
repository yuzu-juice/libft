/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:27:18 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/29 17:03:14 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*buf;
	size_t				i;

	if (s == NULL)
		return (NULL);
	buf = s;
	i = 0;
	while (i < n)
	{
		if (buf[i] == (const unsigned char)c)
			return ((void *)&buf[i]);
		++i;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     const char *str1 = "Hello, World!";
//     size_t n = strlen(str1);
//     int c = 'o';

//     printf("memchr: %p\n", memchr(str1, c, n));
//     printf("ft_memchr: %p\n\n", ft_memchr(str1, c, n));

// 	c = 'a';
//     printf("memchr: %p\n", memchr(str1, c, n));
//     printf("ft_memchr: %p\n\n", ft_memchr(str1, c, n));

//     printf("ft_memchr: %p\n", ft_memchr(NULL, c, n));

//     return 0;
// }
