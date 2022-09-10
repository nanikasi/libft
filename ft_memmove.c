/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:28:06 by nanakani          #+#    #+#             */
/*   Updated: 2022/07/07 22:28:06 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ch_dst;
	char	*ch_src;

	ch_dst = (char *)dst;
	ch_src = (char *)src;
	if (ch_dst == NULL && ch_src == NULL)
		return (NULL);
	if (ch_dst < ch_src)
	{
		while (len-- > 0)
		{
			*ch_dst++ = *ch_src++;
		}
	}
	else
	{
		ch_dst += len;
		ch_src += len;
		while (len-- > 0)
		{
			*--ch_dst = *--ch_src;
		}
	}
	return (dst);
}
