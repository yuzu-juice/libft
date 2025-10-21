/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:20:29 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/21 11:32:53 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*ptr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = (char *)ft_calloc(sizeof(char), s1_len + s2_len + 1);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, s1_len);
	ft_memcpy(ptr + s1_len, s2, s2_len);
	ptr[s1_len + s2_len] = '\0';
	return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char	*str1 = "test";
// 	char	*str2 = " 1";
// 	printf("ft_strjoin: %s\n", ft_strjoin(str1, str2));
// 	printf("ft_strjoin: %s\n", ft_strjoin(NULL, NULL));
// 	printf("ft_strjoin: %s\n", ft_strjoin(NULL, str1));
// 	printf("ft_strjoin: %s\n", ft_strjoin(str1, NULL));
// 	return (0);
// }
