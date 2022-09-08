/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:04:31 by nanakani          #+#    #+#             */
/*   Updated: 2022/08/24 16:04:31 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	char	*string1;
	char	*string2;
	size_t	len;

	string1 = (char *)s1;
	len = ft_strlen(string1);
	string2 = (char *)calloc(len, sizeof(char));
	ft_strlcpy(string2, string1, len);
	return (string2);
}
