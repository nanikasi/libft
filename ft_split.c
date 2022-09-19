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

static size_t	count_elements(char *ch_str, char c);
static char		**assign_p(char *ch_str, char c, char **pp);
static void		memory_free(char **pp, size_t index);
static char		*allocate_memory(char **pp, size_t index, size_t p_len);

char	**ft_split(char const *s, char c)
{
	char	**pp;
	size_t	pp_len;
	char	*ch_str;

	ch_str = (char *)s;
	pp_len = count_elements(ch_str, c);
	pp = (char **)malloc((pp_len + 1) * sizeof(char *));
	if (pp == NULL)
		return (NULL);
	pp[pp_len] = (char *) NULL;
	if (ch_str == NULL)
		return (pp);
	pp = assign_p(ch_str, c, pp);
	return (pp);
}

static size_t	count_elements(char *ch_str, char c)
{
	size_t	pp_len;

	pp_len = 0;
	if (ch_str == NULL)
		return (0);
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

static char	**assign_p(char *ch_str, char c, char **pp)
{
	size_t	i;
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
			p = allocate_memory(pp, i, p_len);
			if (p == NULL)
				return (NULL);
			ft_strlcpy(p, ch_str, p_len + 1);
			pp[i] = p;
			i++;
		}
		while (*ch_str != c && *ch_str != '\0')
			ch_str++;
		while (*ch_str == c && *ch_str != '\0')
			ch_str++;
	}
	return (pp);
}

static char	*allocate_memory(char **pp, size_t index, size_t p_len)
{
	char	*p;

	p = (char *)malloc((p_len + 1) * sizeof(char));
	if (p == NULL)
	{
		memory_free(pp, index);
		return (NULL);
	}
	return (p);
}

static void	memory_free(char **pp, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index)
	{
		free(pp[i]);
	}
	free(pp);
}
