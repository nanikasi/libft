/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 22:44:07 by nanakani          #+#    #+#             */
/*   Updated: 2022/09/10 22:44:07 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*ch_s1;
	char	*p;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = 0;
	ch_s1 = (char *)s1;
	while (ft_strchr(set, *ch_s1) && *ch_s1 != '\0')
		ch_s1++;
	len = ft_strlen(ch_s1);
	while (len > 0 && ft_strchr(set, ch_s1[len - 1]))
		len--;
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, ch_s1, len + 1);
	return (p);
}
