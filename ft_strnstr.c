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
	int		hi;
	int		ni;
	char	*haystack_tmp;
	char	*needle_tmp;
	size_t	haystack_len;

	hi = 0;
	haystack_len = (size_t) sizeof(haystack) / (size_t) sizeof(haystack[0]);
	haystack_tmp = (char *)haystack;
	needle_tmp = (char *)needle;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (hi < len && hi < haystack_len)
	{
		ni = 0;
		while (needle_tmp[ni] != '\0' && hi + ni < len && hi + ni <= haystack_len)
		{
			if (haystack_tmp[hi + ni] != needle_tmp[ni])
				break ;
			ni++;
		}
		if (ni == ft_strlen(needle_tmp))
			return (&haystack_tmp[hi]);
		hi++;
	}
	return (NULL);
}
