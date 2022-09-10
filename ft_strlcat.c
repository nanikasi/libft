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

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	length_dst_src;
	int	i;
	int	j;

	length_dst_src = dstsize + ft_strlen(src);
	i = 0;
	j = 0;
	if (dstsize == 0)
		return (length_dst_src);
	while (dst[i] != '\0')
		i++;
	while (i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (length_dst_src);
}
