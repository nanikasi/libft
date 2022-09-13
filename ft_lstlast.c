/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:23:43 by nanakani          #+#    #+#             */
/*   Updated: 2022/09/13 15:23:43 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp_lst;

	if (lst == NULL)
		return (NULL);
	tmp_lst = lst;
	while (tmp_lst->next != NULL)
		tmp_lst = tmp_lst->next;
	return (tmp_lst);
}
