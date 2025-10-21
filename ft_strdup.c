/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:19:46 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/21 11:40:35 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	s_len;

	s_len = ft_strlen(s);
	ptr = (char *)ft_calloc(s_len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s, s_len);
	ptr[s_len] = '\0';
	return (ptr);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char	*str = "Hello, World!";
// 	printf("strdup: %s\n", strdup(str));
// 	printf("ft_strdup: %s\n\n", ft_strdup(str));

// 	char	*str1 = "";
// 	printf("strdup: %s\n", strdup(str1));
// 	printf("ft_strdup: %s\n\n", ft_strdup(str1));

// 	printf("ft_strdup: %s\n", ft_strdup(NULL));

// 	return (0);
// }
