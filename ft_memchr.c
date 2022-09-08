/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:03:20 by nanakani          #+#    #+#             */
/*   Updated: 2022/08/24 16:03:20 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*string;

	i = 0;
	string = (char *)s;
	while (i < n)
	{
		if (string[i] == c)
			return (&string[i]);
		i++;
	}
	return (NULL);
}
