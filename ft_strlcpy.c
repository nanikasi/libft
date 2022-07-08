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

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	src_len;

	src_len = ft_strlen(src);
	while(dstsize--)
	{
		if (dstsize == 0)
		{
			*dst++ = '\0';
			break;
		}
		*dst++ = *src++;
	}
	return (src_len);
}
