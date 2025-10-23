/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:27:33 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/24 00:38:58 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c);
static int	ft_islower(int c);

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}

static int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

static int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

// #include <ctype.h>
// #include <stdio.h>

// int	main()
// {
// 	printf("isalpha: %d, ft_isalpha: %d\n",
// 			isalpha('a'), ft_isalpha('a'));
// 	printf("isalpha: %d, ft_isalpha: %d\n",
// 			isalpha('A'), ft_isalpha('A'));
// 	printf("isalpha: %d, ft_isalpha: %d\n",
// 			isalpha('1'), ft_isalpha('1'));
// 	printf("isalpha: %d, ft_isalpha: %d\n",
// 			isalpha(' '), ft_isalpha(' '));
// 	printf("isalpha: %d, ft_isalpha: %d\n",
// 			isalpha(0), ft_isalpha(0));
// }
