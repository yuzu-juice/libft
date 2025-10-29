/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga <takitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:40:49 by takitaga          #+#    #+#             */
/*   Updated: 2025/10/29 16:56:44 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(int sign, long l, char next);
static int	ft_isspace(const char c);
static void	skip_spaces(const char *nptr, size_t *i);
static int	parse_sign(const char *nptr, size_t *i);

int	ft_atoi(const char *nptr)
{
	long	ret_value;
	int		sign;
	size_t	i;

	ret_value = 0;
	sign = 1;
	i = 0;
	if (nptr == NULL)
		return (0);
	skip_spaces(nptr, &i);
	sign = parse_sign(nptr, &i);
	while (nptr[i])
	{
		if (nptr[i] < '0' || nptr[i] > '9')
			break ;
		if (check_overflow(sign, ret_value, nptr[i]) == 1)
			return ((int)LONG_MAX);
		if (check_overflow(sign, ret_value, nptr[i]) == -1)
			return ((int)LONG_MIN);
		ret_value = ret_value * 10 + (long)(nptr[i] - '0');
		i++;
	}
	return ((int)(sign * ret_value));
}

static int	check_overflow(int sign, long l, char next)
{
	if (sign == 1)
		if (LONG_MAX / 10 < l
			|| (LONG_MAX / 10 == l && LONG_MAX % 10 < next - '0'))
			return (1);
	if (sign == -1)
		if (LONG_MIN / -10 < l
			|| (LONG_MIN / -10 == l && LONG_MIN % -10 * -1 < next - '0'))
			return (-1);
	return (0);
}

static int	ft_isspace(const char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

static void	skip_spaces(const char *nptr, size_t *i)
{
	while (ft_isspace(nptr[*i]))
		i++;
}

static int	parse_sign(const char *nptr, size_t *i)
{
	if (nptr[*i] == '+' || nptr[*i] == '-')
	{
		if (nptr[*i] == '-')
		{
			i++;
			return (-1);
		}
	}
	return (1);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	const char *s1 = "42aa1";
// 	printf("%d, %d\n", atoi(s1), ft_atoi(s1));

// 	const char *s2 = "9223372036854775808";
// 	printf("%d, %d\n", atoi(s2), ft_atoi(s2));

// 	const char *s3 = "-9223372036854775809";
// 	printf("%d, %d\n", atoi(s3), ft_atoi(s3));

// 	const char *s4 = "";
// 	printf("%d, %d\n", atoi(s4), ft_atoi(s4));

// 	const char *s5 = NULL;
// 	printf("%d\n", ft_atoi(s5));

// 	return 0;
// }
