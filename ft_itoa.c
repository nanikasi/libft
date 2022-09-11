/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 22:44:59 by nanakani          #+#    #+#             */
/*   Updated: 2022/09/10 22:44:59 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*string;
	char	*tmp_string;
	size_t	len;
	long	tmp;

	len = 0;
	tmp = n;
	if (n < 0)
		len++;
	while (tmp != 0 || len == 0)
	{
		tmp /= 10;
		len++;
	}
	string = (char *)ft_calloc(len + 1, sizeof(char));
	if (string == NULL)
		return (NULL);
	tmp_string = string;
	tmp = n;
	if (n < 0)
	{
		*tmp_string++ = '-';
		tmp *= -1;
		len--;
	}
	while (len-- > 0)
	{
		tmp_string[len] = (tmp % 10) + '0';
		tmp /= 10;
	}
	return (string);
}
