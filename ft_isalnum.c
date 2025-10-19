/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:27:33 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/19 18:49:20 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <ctype.h>
// #include <stdio.h>
// int	main()
// {
// 	printf("isalnum: %d, ft_isalnum: %d\n", isalnum('1'), ft_isalnum('1'));
// 	printf("isalnum: %d, ft_isalnum: %d\n", isalnum('A'), ft_isalnum('A'));
// 	printf("isalnum: %d, ft_isalnum: %d\n", isalnum('a'), ft_isalnum('a'));
// 	printf("isalnum: %d, ft_isalnum: %d\n", isalnum(' '), ft_isalnum(' '));
// 	printf("isalnum: %d, ft_isalnum: %d\n", isalnum('_'), ft_isalnum('_'));
// 	printf("isalnum: %d, ft_isalnum: %d\n", isalnum(0), ft_isalnum(0));
// }
