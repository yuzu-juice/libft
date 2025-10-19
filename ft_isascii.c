/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:27:33 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/19 18:51:15 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0b00000000 && c <= 0b01111111)
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main()
// {
// 	printf("isascii: %d, ft_isascii: %d\n", isascii('a'), ft_isascii('a'));
// 	printf("isascii: %d, ft_isascii: %d\n", isascii('A'), ft_isascii('A'));
// 	printf("isascii: %d, ft_isascii: %d\n", isascii(0), ft_isascii(0));
// 	printf("isascii: %d, ft_isascii: %d\n", isascii(-1), ft_isascii(-1));
// 	printf("isascii: %d, ft_isascii: %d\n", isascii(127), ft_isascii(127));
// 	printf("isascii: %d, ft_isascii: %d\n", isascii(128), ft_isascii(128));
// }
