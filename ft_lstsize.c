/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:23:49 by nanakani          #+#    #+#             */
/*   Updated: 2022/09/13 15:23:49 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*tmp_lst;

	if (lst == NULL)
		return (0);
	tmp_lst = lst;
	count = 1;
	while (tmp_lst->next != NULL)
	{
		tmp_lst = tmp_lst->next;
		count++;
	}
	return (count);
}
