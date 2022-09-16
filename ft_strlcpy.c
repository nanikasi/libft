/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:45:15 by nanakani          #+#    #+#             */
/*   Updated: 2022/07/07 23:45:15 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*ch_dst;
	size_t	src_len;
	size_t	i;

	ch_dst = dst;
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (src_len);
	while (i < dstsize - 1 && i < src_len)
	{
		ch_dst[i] = src[i];
		i++;
	}
	ch_dst[i] = '\0';
	return (src_len);
}
