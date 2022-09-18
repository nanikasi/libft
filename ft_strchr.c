/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:20:48 by nanakani          #+#    #+#             */
/*   Updated: 2022/08/24 15:20:48 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*s_tmp;

	s_tmp = (char *)s;
	i = 0;
	while (s_tmp[i] != '\0')
	{
		if (s_tmp[i] == (char)c)
			return (&s_tmp[i]);
		i++;
	}
	if (c == '\0')
		return (&s_tmp[i]);
	return (NULL);
}
