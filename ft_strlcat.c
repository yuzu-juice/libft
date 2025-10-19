/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:49:28 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/19 21:10:21 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		dst_len;
	size_t		src_len;
	size_t		i;

	d = dst;
	s = src;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dst_len || dst == NULL || src == NULL)
		return (dst_len + src_len);
	while (s[i] && (dst_len + i) < size - 1)
	{
		d[dst_len + i] = s[i];
		i++;
	}
	d[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// #include <string.h>
// #include <stdio.h>
// int main() {
// 	char dst1[9] = "Hello";
// 	const char src[] = " World";

// 	size_t ret = ft_strlcat(dst1, src, 9);
// 	printf("%zu, %s\n", ret, dst1);

// 	char	dst2[9] = "Hello";
// 	ret = ft_strlcat(dst2, src, 9);
// 	printf("%zu, %s\n", ret, dst2);

// 	char	dst3[15] = "Hello";
// 	ret = ft_strlcat(dst3, src, 9);
// 	printf("%zu, %s\n", ret, dst3);

// 	char	dst4[9] = "Hello";
// 	ret = ft_strlcat(dst4, NULL, 9);
// 	printf("%zu, %s\n", ret, dst4);
// }
