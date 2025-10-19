/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:27:15 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/19 21:46:20 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	if (n == 0)
		return (0);
	p1 = s1;
	p2 = s2;
	if (p1 == NULL && p2)
		return ((unsigned char)p2[0]);
	if (p2 == NULL && p1)
		return ((unsigned char)p1[0]);
	if (p1 == NULL && p2 == NULL)
		return (0);
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[] = "Hello";
//     char str2[] = "Hello";
//     printf("memcmp: %d\n", memcmp(str1, str2, sizeof(str1)));
//     printf("ft_memcmp: %d\n\n", ft_memcmp(str1, str2, sizeof(str1)));

//     char str3[] = "Hello";
//     char str4[] = "World";
//     printf("memcmp: %d\n", memcmp(str3, str4, sizeof(str3)));
//     printf("ft_memcmp: %d\n\n", ft_memcmp(str3, str4, sizeof(str3)));

//     char str5[] = "Hello";
//     char str6[] = "Hella";
//     printf("memcmp: %d\n", memcmp(str5, str6, sizeof(str5)));
//     printf("ft_memcmp: %d\n\n", ft_memcmp(str5, str6, sizeof(str5)));

//     char str7[] = "";
//     char str8[] = "";
//     printf("memcmp: %d\n", memcmp(str7, str8, sizeof(str7)));
//     printf("ft_memcmp: %d\n\n", ft_memcmp(str7, str8, sizeof(str7)));

//     printf("ft_memcmp: %d\n\n", ft_memcmp(str5, NULL, 1));

// 	printf("ft_memcmp: %d\n\n", ft_memcmp(NULL, str5, 1));

// 	printf("ft_memcmp: %d\n", ft_memcmp(NULL, NULL, 1));

//     return 0;
// }
