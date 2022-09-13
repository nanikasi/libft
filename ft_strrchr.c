/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:21:40 by nanakani          #+#    #+#             */
/*   Updated: 2022/08/24 15:21:40 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s_tmp;

	s_tmp = (char *)s;
	i = ft_strlen(s_tmp);
	if (c == '\0')
		return (&s_tmp[i]);
	while (i >= 0)
	{
		if (s_tmp[i] == (char)c)
			return (&s_tmp[i]);
		i--;
	}
	return (0);
}
