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
	char	*substring;
	size_t	s_len;
	size_t	max_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len || len == 0)
	{
		substring = (char *)malloc(sizeof(char));
		if (substring == NULL)
			return (NULL);
		substring[0] = '\0';
		return (substring);
	}
	max_len = ft_strlen(&s[start]);
	if (start + len > s_len)
		len = max_len;
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	ft_strlcpy(substring, &s[start], len + 1);
	return (substring);
}
