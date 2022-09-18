/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 22:47:10 by nanakani          #+#    #+#             */
/*   Updated: 2022/09/10 22:47:10 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	recursive(long long n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	long long	long_n;

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	long_n = (long long)n;
	if (n < 0)
	{
		write(fd, "-", 1);
		long_n *= -1;
	}
	recursive(long_n, fd);
}

static void	recursive(long long n, int fd)
{
	if (n < 10)
	{
		n += '0';
		write(fd, &n, 1);
	}
	else
	{
		recursive(n / 10, fd);
		recursive(n % 10, fd);
	}
}
