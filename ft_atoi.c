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

int	ft_atoi(const char *str)
{
	char	*s;
	int		base;
	int		value;
	int		minus_flag;
	int		tmp;

	s = (char *)str;
	value = 0;
	minus_flag = 1;
	while (*s == '\t' || *s == '\n' || *s == '\v'
		|| *s == '\f' || *s == '\r' || *s == ' ')
		s++;
	if (*s == '-')
		minus_flag = -1;
	if (*s == '-' || *s == '+')
		s++;
	base = 10;
	while (ft_isdigit(*s))
	{
		value = (value * base) + (minus_flag * (int)(*s - '0'));
		s++;
	}
	return (value);
}
