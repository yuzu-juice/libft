/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:27:33 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/29 17:04:10 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i])
		++i;
	return (i);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	printf("%lu, %lu\n", strlen("abcdef"), ft_strlen("abcdef"));
// 	printf("%lu, %lu\n", strlen(""), ft_strlen(""));
// 	printf("%lu\n", ft_strlen(NULL));
// 	// printf("%lu, %lu\n", strlen(NULL), ft_strlen(NULL));
// }
