/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:07:22 by nanakani          #+#    #+#             */
/*   Updated: 2022/07/07 22:07:22 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, void *src, unsigned int n)
{
	char	*ch_dst;
	char	*ch_src;

	ch_dst = (char *)dst;
	ch_src = (char *)src;
	while (n--)
	{
		*ch_dst++ = *ch_src++;
	}
	return (dst);
}
