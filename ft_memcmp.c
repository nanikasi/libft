/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:03:25 by nanakani          #+#    #+#             */
/*   Updated: 2022/08/24 16:03:25 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*string1;
	char	*string2;

	i = 0;
	string1 = (char *)s1;
	string2 = (char *)s2;
	while (n > i)
	{
		if ((unsigned char)string1[i] != (unsigned char)string2[i])
			return ((unsigned char)string1[i] - (unsigned char)string2[i]);
		i ++;
	}
	return (0);
}
