/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:54:58 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/29 17:04:16 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	if (s1 == NULL && s2)
		return (s2[0]);
	if (s2 == NULL && s1)
		return (s1[0]);
	if (s1 == NULL && s2 == NULL)
		return (0);
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		if (s1[i] != s2[i])
			break ;
		if (s1[i] == s2[i] && i == n - 1)
			return (0);
		++i;
	}
	return ((int)s1[i] - (int)s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *s1 = "abcdefgh";
// 	char *s2 = "abcdwxyz";
// 	printf("strncmp: %d\n", strncmp(s1, s2, 5));
// 	printf("ft_strncmp: %d\n\n", ft_strncmp(s1, s2, 5));

// 	s1 = "";
// 	s2 = "";
// 	printf("strncmp: %d\n", strncmp(s1, s2, 4));
// 	printf("ft_strncmp: %d\n\n", ft_strncmp(s1, s2, 4));

// 	s1 = "abcdefgh";
// 	printf("ft_strncmp: %d\n\n", ft_strncmp(s1, NULL, 4));

// 	s2 = "abcdefgh";
// 	printf("ft_strncmp: %d\n\n", ft_strncmp(NULL, s2, 4));

// 	printf("ft_strncmp: %d\n", ft_strncmp(NULL, NULL, 4));
// }
