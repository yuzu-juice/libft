/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:56:57 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/19 19:52:35 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (s == NULL)
		return ;
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// #include <strings.h>

// int	main()
// {
// 	unsigned char	s1[] = "0123456789";
// 	unsigned char	s2[] = "0123456789";

// 	printf("bzero\n");
// 	bzero(s1, 3);
// 	for (int i=0; i<3; i++)
// 		printf("%d: %s\n", i, s1+i);
// 	printf("\nft_bzero\n");
// 	ft_bzero(s2, 3);
// 	for (int i=0; i<3; i++)
// 		printf("%d: %s\n", i, s2+i);

// 	// void *s3 = NULL;
// 	void *s4 = NULL;

// 	// printf("bzero\n");
// 	// bzero(s3, 1);
// 	// for (int i=0; i<1; i++)
// 	// 	printf("%d: %s\n", i, s1+i);
// 	printf("\nft_bzero\n");
// 	ft_bzero(s4, 1);
// 	for (int i=0; i<1; i++)
// 		printf("%d: %s\n", i, s2+i);
// }
