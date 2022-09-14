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

int	when_zero(int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	long	long_n;
	long	base;
	char	c;

	long_n = n;
	base = 1;
	if (when_zero(n, fd))
		return ;
	if (n < 0)
	{
		write(fd, "-", 1);
		long_n *= -1;
	}
	while (base <= long_n)
		base *= 10;
	base /= 10;
	while (base != 0)
	{
		c = (long_n / base) + '0';
		write(fd, &c, 1);
		long_n %= base;
		base /= 10;
	}
	write(fd, "\0", 1);
}

int	when_zero(int n, int fd)
{
	if (n == 0)
	{
		write(fd, "0", 1);
		write(fd, "\0", 1);
		return (1);
	}
	return (0);
}
