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

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*uc_s;

	i = 0;
	uc_s = (unsigned char *)s;
	while (i < n)
	{
		if (uc_s[i] == (unsigned char)c)
			return ((void *)&uc_s[i]);
		i++;
	}
	return (NULL);
}
