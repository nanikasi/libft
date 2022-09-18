/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:23:35 by nanakani          #+#    #+#             */
/*   Updated: 2022/09/13 15:23:35 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp_list;
	t_list	*del_list;

	if (lst == NULL || del == NULL)
		return ;
	tmp_list = *lst;
	while (tmp_list != NULL)
	{
		del_list = tmp_list;
		tmp_list = tmp_list->next;
		ft_lstdelone(del_list, del);
	}
	*lst = NULL;
}
