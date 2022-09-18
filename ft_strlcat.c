/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:51:05 by nanakani          #+#    #+#             */
/*   Updated: 2022/07/08 18:51:05 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	length_dst_src;
	size_t	dst_i;
	size_t	src_i;
	size_t	dst_len;
	size_t	src_len;

	if (dstsize == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize > dst_len)
		length_dst_src = dst_len + src_len;
	else
		length_dst_src = dstsize + src_len;
	dst_i = dst_len;
	src_i = 0;
	while (dst_i < dstsize - 1)
	{
		if (dst_i > length_dst_src)
			return (length_dst_src);
		if (src_i < src_len)
			dst[dst_i] = src[src_i];
		else
			dst[dst_i] = '\0';
		dst_i++;
		src_i++;
	}
	dst[dst_i] = '\0';
	return (length_dst_src);
}
