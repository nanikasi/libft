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

size_t	count_elements(char *ch_str, char c);
void	assign_p(char *ch_str, char c, char **pp);

char	**ft_split(char const *s, char c)
{
	char	**pp;
	size_t	pp_len;
	char	*ch_str;

	ch_str = (char *)s;
	pp_len = count_elements(ch_str, c);
	pp = (char **)ft_calloc(pp_len, sizeof(char *));
	if (pp == NULL)
		return (NULL);
	ch_str = (char *)s;
	assign_p(ch_str, c, pp);
	return (pp);
}

size_t	count_elements(char *ch_str, char c)
{
	size_t	pp_len;

	pp_len = 0;
	while (*ch_str != '\0')
	{
		if (*ch_str != c)
			pp_len++;
		while (*ch_str != c && *ch_str != '\0')
			ch_str++;
		while (*ch_str == c && *ch_str != '\0')
			ch_str++;
	}
	return (pp_len);
}

void	assign_p(char *ch_str, char c, char **pp)
{
	int		i;
	size_t	p_len;
	char	*p;

	i = 0;
	while (*ch_str != '\0')
	{
		if (*ch_str != c)
		{
			p_len = 0;
			while (ch_str[p_len] != c && ch_str[p_len] != '\0')
				p_len++;
			p = (char *)ft_calloc(p_len + 1, sizeof(char));
			if (p == NULL)
				return ;
			ft_strlcpy(p, ch_str, p_len + 1);
			pp[i] = p;
			i++;
		}
		while (*ch_str != c && *ch_str != '\0')
			ch_str++;
		while (*ch_str == c && *ch_str != '\0')
			ch_str++;
	}
	return ;
}