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
	unsigned char	*uc_dst;
	unsigned char	*uc_src;
	size_t			i;

	uc_dst = (char unsigned *)dst;
	uc_src = (char unsigned *)src;
	if (uc_dst == NULL && uc_src == NULL)
		return (NULL);
	if (uc_dst < uc_src)
		ft_memcpy(dst, src, len);
	else
	{
		i = 0;
		while (i < len)
		{
			uc_dst[len - (i + 1)] = uc_src[len - (i + 1)];
			i++;
		}
	}
	return (dst);
}
