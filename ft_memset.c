/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:39:57 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/29 17:03:24 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	if (s == NULL)
		return (s);
	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		++i;
	}
	return (s);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	//////////////////////////////////////////////
//     char str1[] = "0123456789";
// 	char *ret = (char *)memset(str1, '*', 5);

// 	printf("memset: ");
// 	for (int i = 0; i < strlen(str1); ++i) {
// 		    printf("%c", ret[i]);
// 	}
// 	printf("\n");

//     char str2[] = "0123456789";
// 	ret = (char *)ft_memset(str1, '*', 5);

// 	printf("ft_memset: ");
// 	for (int i = 0; i < strlen(str1); ++i) {
// 		    printf("%c", ret[i]);
// 	}
// 	printf("\n");
// 	//////////////////////////////////////////////

// 	//////////////////////////////////////////////
// 	char str3[] = "0123456789";
// 	ret = (char *)memset(str3, 1000, 5);

// 	printf("memset: ");
// 	for (int i = 0; i < strlen(str3); ++i) {
// 		    printf("%c", ret[i]);
// 	}
// 	printf("\n");

//     char str4[] = "0123456789";
// 	ret = (char *)ft_memset(str4, 1000, 5);

// 	printf("ft_memset: ");
// 	for (int i = 0; i < strlen(str1); ++i) {
// 		    printf("%c", ret[i]);
// 	}
// 	printf("\n");
// 	//////////////////////////////////////////////

//     // printf("memset with NULL: %p\n", memset(NULL, '*', 5));
//     printf("ft_memset: %p\n", ft_memset(NULL, '*', 5));

// 	return 0;
// }
