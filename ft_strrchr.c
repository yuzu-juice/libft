/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:46:20 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/19 21:24:08 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	const char	*str;
	char		*ret_val;

	if (s == NULL)
		return (NULL);
	i = 0;
	str = s;
	ret_val = NULL;
	while (1)
	{
		if (str[i] == (const char)c)
			ret_val = (char *)&str[i];
		if (str[i] == '\0')
			break ;
		i++;
	}
	return (ret_val);
}

// #include <stdio.h>
// #include <string.h>
// int	main(){
// 	const char s[] = "test string";
// 	int	c = 'a';
// 	printf("%p, %p\n", strrchr(s, c), ft_strrchr(s, c));

// 	c = 's';
// 	printf("%p, %p\n", strrchr(s, c), ft_strrchr(s, c));

// 	const char s1[] = "";
// 	c = 0;
// 	printf("%p, %p\n", strrchr(s1, c), ft_strrchr(s1, c));

// 	c = '\0';
// 	printf("%p\n", ft_strrchr(NULL, c));
// }
