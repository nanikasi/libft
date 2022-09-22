/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:03:40 by nanakani          #+#    #+#             */
/*   Updated: 2022/08/24 16:03:40 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*skip_space(char *s);
static long	isoverflow(long n, char c);
static long	ft_atol(const char *str);

int	ft_atoi(const char *str)
{
	return ((int)ft_atol(str));
}

static long	ft_atol(const char *str)
{
	char	*s;
	long	n;
	int		sign;

	s = skip_space((char *)str);
	sign = 1;
	if (*s == '-' || *s == '+')
	{
		sign = ',' - *s;
		s++;
	}
	n = 0;
	while (ft_isdigit(*s))
	{
		if (isoverflow(n, *s))
		{
			if (sign < 0)
				return (LONG_MIN);
			else
				return (LONG_MAX);
		}
		n = (n * 10) + (long)(*s - '0');
		s++;
	}
	return (n * sign);
}

static long	isoverflow(long n, char c)
{
	long	square;
	long	long_c;

	square = n * 10;
	long_c = (long)(c - '0');
	return (square / 10 != n || LONG_MAX - long_c < square);
}

static char	*skip_space(char *s)
{
	while (ft_strchr(" \t\n\v\f\r", *s))
		s++;
	return (s);
}
