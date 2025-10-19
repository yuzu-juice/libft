/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:39:08 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/19 20:05:53 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (n == 0)
		return (dest);
	if (dest == NULL || src == NULL)
		return (dest);
	i = 0;
	d = dest;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
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
// 	printf("memcpy: %s, ", memcpy(dest1_1, src1, 5));
// 	printf("ft_memcpy: %s\n", ft_memcpy(dest1_2, src1, 5));

//  	char src2[] = "0123456789";
//     char dest2_1[] = "";
//     char dest2_2[] = "";
// 	printf("memcpy: %s, ", memcpy(dest2_1, src2, 5));
// 	printf("ft_memcpy: %s\n", ft_memcpy(dest2_2, src2, 5));

// 	char dest3[] = "aaa";
// 	printf("ft_memcpy: %s\n", ft_memcpy(dest3, NULL, 5));

// 	char src4[] = "aaa";
// 	printf("ft_memcpy: %s\n", ft_memcpy(NULL, src4, 5));

//     return 0;
// }
