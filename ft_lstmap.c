/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:23:45 by nanakani          #+#    #+#             */
/*   Updated: 2022/09/13 15:23:45 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;

	head = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst != NULL)
	{
		ft_lstadd_back(&head, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (head);
}
