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
#include <limits.h>

char	*skip(char *s, int *minus_flag);

int	ft_atoi(const char *str)
{
	char	*s;
	int		base;
	long	value;
	int		minus_flag;
	int		tmp;

	s = (char *)str;
	value = 0;
	minus_flag = 1;
	s = skip(s, &minus_flag);
	base = 10;
	while (ft_isdigit(*s))
	{
		tmp = value * base;
		if (value != 0 && tmp / value != base)
		{
			if (value < 0)
				return ((int)LONG_MIN);
			else
				return ((int)LONG_MAX);
		}
		value = tmp + (minus_flag * (int)(*s - '0'));
		s++;
	}
	return ((int)value);
}

char	*skip(char *s, int *minus_flag)
{
	while (*s == '\t' || *s == '\n' || *s == '\v'
		|| *s == '\f' || *s == '\r' || *s == ' ')
		s++;
	if (*s == '-')
		*minus_flag = -1;
	if (*s == '-' || *s == '+')
		s++;
	return (s);
}
