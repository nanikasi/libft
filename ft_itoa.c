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

static size_t	count_len(int n);
static void	recursive(long long n, char *string, size_t *index);

char	*ft_itoa(int n)
{
	char	*string;
	size_t	len;
	size_t	index;
	long long	long_n;

	len = count_len(n);
	string = (char *)malloc((len + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	long_n = (long long)n;
	index = 0;
	if (long_n < 0)
	{
		*string = '-';
		long_n *= -1;
		index += 1;
	}
	recursive(long_n, string, &index);
	string[index] = '\0';
	return (string);
}

static void	recursive(long long n, char *string, size_t *index)
{
	if (n < 10)
	{
		n += '0';
		string[*index] = n;
		*index += 1;
	}
	else
	{
		recursive(n / 10, string, index);
		recursive(n % 10, string, index);
	}
}

// 12312
// long	cal_base(int n);
// size_t	count_len(int n);
// void	assign(char *string, long base, int n);

// char	*ft_itoa(int n)
// {
// 	char	*string;
// 	size_t	len;
// 	long	base;

// 	len = count_len(n);
// 	base = cal_base(n);
// 	string = (char *)malloc((len + 1) * sizeof(char));
// 	if (string == NULL)
// 		return (NULL);
// 	assign(string, base, n);
// 	return (string);
// }

// void	assign(char *string, long base, int n)
// {
// 	long	long_n;

// 	long_n = (long)n;
// 	if (long_n < 0)
// 	{
// 		*string++ = '-';
// 		long_n *= -1;
// 	}
// 	if (n == 0)
// 		*string++ = '0';
// 	while (base != 0)
// 	{
// 		*string++ = (long_n / base) + '0';
// 		long_n %= base;
// 		base /= 10;
// 	}
// }

static size_t	count_len(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

// long	cal_base(int n)
// {
// 	long	base;
// 	long	tmp_n;

// 	base = 1;
// 	tmp_n = (long)n;
// 	if (tmp_n < 0)
// 		tmp_n *= -1;
// 	while (base <= tmp_n)
// 		base *= 10;
// 	base /= 10;
// 	return (base);
// }


//再帰で書こう