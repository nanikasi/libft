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
	int		length_dst_src;
	int		dst_i;
	int		src_i;

	if (dstsize > ft_strlen(dst))
		length_dst_src = ft_strlen(dst) + ft_strlen(src);
	else
		length_dst_src = dstsize + ft_strlen(src);
	if (dstsize == 0)
		return (length_dst_src);
	dst_i = 0;
	src_i = 0;
	while (dst[dst_i] != '\0')
		dst_i++;
	while (dst_i < dstsize - 1)
	{
		if (dst_i > length_dst_src)
			return (length_dst_src);
		if (src_i < ft_strlen(src))
			dst[dst_i] = src[src_i];
		else
			dst[dst_i] = '\0';
		dst_i++;
		src_i++;
	}
	dst[dst_i] = '\0';
	return (length_dst_src);
}
