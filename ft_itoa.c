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

char	*ft_itoa(int n)
{
	char	*string;
	size_t	len;
	long	base;

	if (n == 0)
		return ("0");
	len = count_len(n);
	base = cal_base(n);
	string = (char *)ft_calloc(len, sizeof(char));
	if (string == NULL)
		return (NULL);
	if (n < 0)
	{
		*string++ = '-';
		n *= -1;
	}
	while (base != 0)
	{
		*string++ = (n / base) + '0';
		n %= base;
		base /= 10;
	}
	while (len-- > 0)
		string--;
	return (string);
}

size_t	count_len(int n)
{
	size_t	len;
	long	base;

	base = 1;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (base <= n)
	{
		base *= 10;
		len++;
	}
	return (len);
}

long	cal_base(int n)
{
	long	base;

	base = 1;
	if (n < 0)
		n *= -1;
	while (base <= n)
		base *= 10;
	base /= 10;
	return (base);
}
