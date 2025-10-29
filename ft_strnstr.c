/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:12:09 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/29 17:04:19 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;
	size_t	big_len;

	i = 0;
	little_len = ft_strlen(little);
	big_len = ft_strlen(big);
	if (little_len == 0)
		return ((char *)&big[i]);
	if (len == 0 || big_len < little_len || len < little_len)
		return (NULL);
	if (big_len < len)
		len = big_len;
	while (i < len - little_len + 1)
	{
		if (ft_strncmp(&big[i], little, little_len) == 0)
			return ((char *)&big[i]);
		++i;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     const char *big = "Hello, world!";
//     const char *little = "world";
//     size_t len = strlen(big);

//     printf("ft_strnstr: %s\n\n", ft_strnstr(big, little, len));

//     big = "Hello, world!";
//     little = "foo";
//     printf("ft_strnstr: %s\n\n", ft_strnstr(big, little, len));

//     big = "Hello, world!";
//     little = "";
//     printf("ft_strnstr: %s\n\n", ft_strnstr(big, little, len));

//     big = "";
//     little = "";
//     printf("ft_strnstr: %s\n\n", ft_strnstr(big, little, len));

// 	big = "Hello, world!";
//     printf("ft_strnstr: %s\n\n", ft_strnstr(big, NULL, len));

// 	little = "foo";
//     printf("ft_strnstr: %s\n\n", ft_strnstr(NULL, little, len));

//     printf("ft_strnstr: %s\n\n", ft_strnstr(NULL, NULL, len));

//     return 0;
// }
