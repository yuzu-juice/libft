/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:46:16 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/22 15:44:57 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (n == 0 || dest == NULL || src == NULL || dest == src)
		return (dest);
	d = dest;
	s = src;
	if (d < s)
		ft_memcpy(d, s, n);
	else if (d > s)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	char	src1[] = "0123456789";
// 	char	dest1_1[] = "9876543210";
// 	char	dest1_2[] = "9876543210";
// 	printf("memmove: %s, ", memmove(dest1_1, src1, 5));
// 	printf("ft_memmove: %s\n", ft_memmove(dest1_2, src1, 5));

//  	char src2[] = "0123456789";
//     char dest2_1[] = "";
//     char dest2_2[] = "";
// 	printf("memmove: %s, ", memmove(dest2_1, src2, 5));
// 	printf("ft_memmove: %s\n", ft_memmove(dest2_2, src2, 5));

// 	char src3_1[] = "0123456789";
// 	char src3_2[] = "0123456789";
// 	printf("memmove: %s, ", memmove(src3_1 + 1, src3_1, 5));
// 	printf("ft_memmove: %s\n", ft_memmove(src3_2 + 1, src3_2, 5));

// 	char dest4[] = "aaa";
// 	printf("ft_memmove: %s\n", ft_memmove(dest4, NULL, 5));

// 	char src5[] = "aaa";
// 	printf("ft_memmove: %s\n", ft_memmove(NULL, src5, 5));

//     return 0;
// }
