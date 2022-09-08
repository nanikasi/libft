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

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	src_len;

	src_len = ft_strlen(src);
	while (dstsize--)
	{
		if (dstsize == 0)
		{
			*dst++ = '\0';
			break ;
		}
		*dst++ = *src++;
	}
	return (src_len);
}
