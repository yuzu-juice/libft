/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:27:33 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/19 18:55:40 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// #include <ctype.h>
// #include <stdio.h>

// int	main()
// {
// 	printf("isdigit: %d, ft_isdigit: %d\n", isdigit('a'), ft_isdigit('a'));
// 	printf("isdigit: %d, ft_isdigit: %d\n", isdigit('A'), ft_isdigit('A'));
// 	printf("isdigit: %d, ft_isdigit: %d\n", isdigit('1'), ft_isdigit('1'));
// 	printf("isdigit: %d, ft_isdigit: %d\n", isdigit(' '), ft_isdigit(' '));
// 	printf("isdigit: %d, ft_isdigit: %d\n", isdigit(0), ft_isdigit(0));
// }
