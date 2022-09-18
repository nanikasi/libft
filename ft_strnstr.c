/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:03:36 by nanakani          #+#    #+#             */
/*   Updated: 2022/08/24 16:03:36 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hi;
	size_t	ni;
	size_t	haystack_len;
	size_t	needle_len;

	if (haystack == NULL && len == 0 && needle != NULL)
		return (NULL);
	needle_len = ft_strlen(needle);
	haystack_len = ft_strlen(haystack);
	if (needle_len == 0)
		return ((char *)haystack);
	hi = 0;
	while (hi < len && hi < haystack_len)
	{
		ni = 0;
		while (needle[ni] != '\0' && hi + ni < len
			&& hi + ni <= haystack_len)
		{
			if (haystack[hi + ni] != needle[ni])
				break ;
			ni++;
		}
		if (ni == needle_len)
			return ((char *)&haystack[hi]);
		hi++;
	}
	return (NULL);
}
