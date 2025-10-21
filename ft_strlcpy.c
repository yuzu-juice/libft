/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:24:30 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/21 12:40:51 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		i;

	if (size == 0 || dst == NULL)
		return (ft_strlen(src));

	d = dst;
	s = src;
	i = 0;
	while (s[i] && i < size - 1)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (ft_strlen(src));
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	char	src[] = "01234";
// 	char	dst1[] = "9876543210";

// 	size_t ret = ft_strlcpy(dst1, src, strlen(src));
// 	printf("%zu, %s\n", ret, dst1);

// 	char	dst2[] = "9876543210";
// 	ret = ft_strlcpy(dst2, src, 0);
// 	printf("%zu, %s\n", ret, dst2);

// 	char	dst3[] = "9876543210";
// 	ret = ft_strlcpy(dst3, src, strlen(src) + 1);
// 	printf("%zu, %s\n", ret, dst3);

// 	char	dst4[] = "9876543210";
// 	ret = ft_strlcpy(dst4, NULL, 0);
// 	printf("%zu, %s\n", ret, dst4);

// 	ret = ft_strlcpy(NULL, src, 0);
// 	printf("%zu\n", ret);
// }
