/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:27:33 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/19 18:55:07 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 0x20 && c <= 0x7E);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main()
// {
// 	printf("isprint: %d, ft_isprint: %d\n", isprint('a'), ft_isprint('a'));
// 	printf("isprint: %d, ft_isprint: %d\n", isprint('A'), ft_isprint('A'));
// 	printf("isprint: %d, ft_isprint: %d\n", isprint('1'), ft_isprint('1'));
// 	printf("isprint: %d, ft_isprint: %d\n", isprint(' '), ft_isprint(' '));
// 	printf("isprint: %d, ft_isprint: %d\n", isprint(0x1F), ft_isprint(0x1F));
// 	printf("isprint: %d, ft_isprint: %d\n", isprint('~'), ft_isprint('~'));
// 	printf("isprint: %d, ft_isprint: %d\n", isprint(0x7F), ft_isprint(0x7F));
// }
