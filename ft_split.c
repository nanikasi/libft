/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 22:44:30 by nanakani          #+#    #+#             */
/*   Updated: 2022/09/10 22:44:30 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**pp;
	char	*p;
	size_t		pp_len;
	size_t		p_len;
	char	*ch_str;
	int		i;

	pp_len = 0;
	ch_str = (char *)s;
	while (ch_str != '\0')
	{
		ch_str = ft_strchr(ch_str, c);
		if (ch_str == 0)
			break ;
		ch_str++;
		pp_len++;
	}
	pp_len++;
	pp = (char **)ft_calloc(pp_len, sizeof(char *));
	if (pp == NULL)
		return (NULL);
	ch_str = (char *)s;
	while (i < pp_len)
	{
		i = 0;
		p_len = 0;
		while (ch_str[p_len] != c && ch_str[p_len] != '\0')
			p_len++;
		p = (char *)ft_calloc(p_len + 1, sizeof(char));
		if (p == NULL)
			return (NULL);
		ft_strlcpy(p, ch_str, p_len + 1);
		pp[i] = p;
		i++;
	}
	return (pp);
}
