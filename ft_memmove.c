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

void	*ft_memmove(void *dst, void *src, unsigned int len)
{
	unsigned int	src_len;
	unsigned int	dst_len;
	char			*ch_dst;
	char			*ch_src;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	ch_dst = (char *)dst;
	ch_src = (char *)src;
	if (src_len < len)
		len = src_len;
	if (dst_len < src_len)
		if (dst_len < len)
			len = dst_len;
	while (len--)
	{
		*ch_dst++ = *ch_src++;
	}
	return (dst);
}
