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
	int		len;
	char	*ch_s1;
	char	*p;

	len = 0;
	ch_s1 = (char *)s1;
	while (ft_strchr(set, *ch_s1) && *ch_s1 != '\0')
		ch_s1++;
	len = ft_strlen(ch_s1);
	len--;
	while (len > 0 && ft_strchr(set, ch_s1[len]))
		len--;
	len++;
	p = (char *)ft_calloc(len + 1, sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, ch_s1, len + 1);
	return (p);
}
