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
	long	n;
	int		minus_flag;
	long	tmp;
	int		a_t;

	s = (char *)str;
	n = 0;
	minus_flag = 1;
	s = skip(s, &minus_flag);
	while (ft_isdigit(*s))
	{
		tmp = n * 10;
		a_t = (minus_flag * (int)(*s - '0'));
		if (n != 0 && tmp / n != 10 && ((tmp + a_t) - a_t) == tmp)
		{
			if (n < 0)
				return ((int)LONG_MIN);
			else
				return ((int)LONG_MAX);
		}
		n = tmp + a_t;
		s++;
	}
	return ((int)n);
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
