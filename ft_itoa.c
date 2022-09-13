/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 22:44:59 by nanakani          #+#    #+#             */
/*   Updated: 2022/09/10 22:44:59 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	cal_base(int n);
size_t	count_len(int n);
void	assign(char *string, long base, int n);

char	*ft_itoa(int n)
{
	char	*string;
	size_t	len;
	long	base;

	len = count_len(n);
	base = cal_base(n);
	string = (char *)ft_calloc(len + 1, sizeof(char));
	if (string == NULL)
		return (NULL);
	assign(string, base, n);
	return (string);
}

void	assign(char *string, long base, int n)
{
	long	long_n;

	long_n = (long)n;
	if (long_n < 0)
	{
		*string++ = '-';
		long_n *= -1;
	}
	if (n == 0)
		*string++ = '0';
	while (base != 0)
	{
		*string++ = (long_n / base) + '0';
		long_n %= base;
		base /= 10;
	}
}

size_t	count_len(int n)
{
	size_t	len;
	long	base;

	len = 0;
	if (n < 0)
		len++;
	base = cal_base(n);
	if (base == 0)
		return (1);
	while (base != 0)
	{
		base /= 10;
		len++;
	}
	return (len);
}

long	cal_base(int n)
{
	long	base;
	long	tmp_n;

	base = 1;
	tmp_n = (long)n;
	if (tmp_n < 0)
		tmp_n *= -1;
	while (base <= tmp_n)
		base *= 10;
	base /= 10;
	return (base);
}
