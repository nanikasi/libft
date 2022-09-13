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
	size_t	dst_max_size;
	int		i;
	int		j;

	dst_max_size = (size_t)sizeof(dst)/(size_t)sizeof(dst[0]);
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize > dst_max_size)
		length_dst_src = dst_max_size;
	else
		length_dst_src = dstsize;
	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (i < length_dst_src - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	length_dst_src += ft_strlen(src);
	return (length_dst_src);
}
