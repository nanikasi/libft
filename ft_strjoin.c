/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 22:43:42 by nanakani          #+#    #+#             */
/*   Updated: 2022/09/10 22:43:42 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*string;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	string = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	ft_strlcpy(string, s1, s1_len + 1);
	ft_strlcat(string, s2, s1_len + s2_len + 1);
	return (string);
}
