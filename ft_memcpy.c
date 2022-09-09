/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:07:22 by nanakani          #+#    #+#             */
/*   Updated: 2022/07/07 22:07:22 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*ch_dst;
	char	*ch_src;

	ch_dst = (char *)dst;
	ch_src = (char *)src;
	if (ch_src == NULL || ch_dst == NULL)
		return (NULL);
	while (n--)
	{
		*ch_dst++ = *ch_src++;
	}
	return (dst);
}
