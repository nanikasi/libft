/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:04:26 by nanakani          #+#    #+#             */
/*   Updated: 2022/08/24 16:04:26 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	square;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	square = count * size;
	if (square / count != size)
		return (NULL);
	p = malloc(size * count);
	if (p == NULL)
		return (NULL);
	ft_memset(p, '\0', size * count);
	return (p);
}
