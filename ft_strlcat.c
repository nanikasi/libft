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
	int				length_dst_src;
	int				i;
	unsigned int	size;

	length_dst_src = ft_strlen(dst) + ft_strlen(src);
	i = 0;
	size = dstsize;
	while (dst[i] != '\0')
		i++;
	while (size-- > 0 && sizeof(dst) >= i - 1 && *src != 0)
	{
		if (size == 0)
		{
			dst[i] = '\0';
			i++;
			break ;
		}
		dst[i] = *src++;
		i++;
	}
	return (length_dst_src);
}
