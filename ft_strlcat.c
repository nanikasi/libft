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

unsigned int	ft_strlcat(char *a_dst, const char *src, unsigned int dstsize)
{
	int				length_dst_src;
	int				i;
	unsigned int	size;

	length_dst_src = ft_strlen(a_dst) + ft_strlen(src);
	i = 0;
	size = dstsize;
	while (a_dst[i] != '\0')
		i++;
	while (size-- > 0 && sizeof(a_dst) >= i - 1 && *src != 0)
	{
		if (size == 0)
		{
			a_dst[i] = '\0';
			i++;
			break ;
		}
		a_dst[i] = *src++;
		i++;
	}
	return (length_dst_src);
}
