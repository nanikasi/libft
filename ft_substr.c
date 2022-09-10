/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 22:43:15 by nanakani          #+#    #+#             */
/*   Updated: 2022/09/10 22:43:15 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		return (NULL);
	}
	substring = (char *)ft_calloc(len + 1, sizeof(char));
	if (substring == NULL)
		return (NULL);
	ft_strlcpy(substring, &s[start], len + 1);
	return (substring);
}
