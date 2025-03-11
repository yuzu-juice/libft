/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takitaga  <takitaga@student.42tokyo.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:00:07 by takitaga          #+#    #+#             */
/*   Updated: 2025/03/11 14:18:36 by takitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_double(const char *nptr);
static double	calc_return_value(int flag, char **split);

double	ft_atof(const char *nptr)
{
	char	**split;
	double	ret_value;
	int		flag;

	flag = 0;
	if (!nptr)
		return (0);
	if (!is_double(nptr))
		return (ft_atoi(nptr));
	if (nptr[0] == '-')
	{
		flag = 1;
		nptr++;
	}
	split = ft_split(nptr, '.');
	if (!split)
		return (0);
	ret_value = calc_return_value(flag, split);
	free(split[0]);
	free(split[1]);
	free(split);
	return (ret_value);
}

static int	is_double(const char *nptr)
{
	size_t	i;
	int		dot;

	i = 0;
	dot = 0;
	while (nptr[i])
	{
		if (nptr[i] == '.')
			dot++;
		i++;
	}
	if (dot > 1 || dot == 0)
		return (0);
	return (1);
}

static double	calc_return_value(int flag, char **split)
{
	double	ret_value;

	if (flag == 0)
	{
		ret_value = (double)ft_atoi(split[0]);
		ret_value += (double)ft_atoi(split[1])
			/ ft_pow(10, ft_strlen(split[1]));
	}
	else
	{
		ret_value = -(double)ft_atoi(split[0]);
		ret_value -= (double)ft_atoi(split[1])
			/ ft_pow(10, ft_strlen(split[1]));
	}
	return (ret_value);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	const char *s1 = "42e-1";
// 	printf("%f, %f\n", atof(s1), ft_atof(s1));

// 	const char *s2 = "3124.12981";
// 	printf("%f, %f\n", atof(s2), ft_atof(s2));

// 	const char *s3 = "-9223372036854775809";
// 	printf("%f, %f\n", atof(s3), ft_atof(s3));

// 	const char *s4 = "";
// 	printf("%f, %f\n", atof(s4), ft_atof(s4));

// 	const char *s5 = "-1.181";
// 	printf("%f, %f\n", atof(s5), ft_atof(s5));

// 	const char *s6 = "-0.181348910473147120471";
// 	printf("%f, %f\n", atof(s6), ft_atof(s6));
// }
