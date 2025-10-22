/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:39:55 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/22 15:43:58 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*n_str;

	n_str = ft_itoa(n);
	if (n_str == NULL)
		return ;
	ft_putstr_fd(n_str, fd);
}

// #include <stdio.h>
// #include <unistd.h>
// #include <fcntl.h>
// #include <string.h>

// int main() {
//     char filename[] = "testfile.txt";
//     int num = 123;
//     char *buffer;

// 	buffer = malloc(sizeof(char) * 4);
//     int fd = open(filename, O_CREAT | O_RDWR, 0666);
//     if (fd == -1) {
//         perror("open");
//         return 1;
//     }

//     ft_putnbr_fd(num, fd);

//     lseek(fd, 0, SEEK_SET); // ファイルポインタを先頭に移動
//     read(fd, buffer, 3);
//     buffer[3] = '\0';

//     printf("Written number: %s\n", buffer);

//     close(fd);
//     remove(filename);

//     return 0;
// }
