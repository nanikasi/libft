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

void *ft_calloc(size_t count, size_t size)
{
	void	*p;
	int		i;

	if (size == 0 || count == 0)
		return (NULL);
	p = (void *)malloc(size * count);
	ft_memset(p, 0, size * count);
	return (p);
}