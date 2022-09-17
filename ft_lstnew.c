/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:23:47 by nanakani          #+#    #+#             */
/*   Updated: 2022/09/13 15:23:47 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list_p;

	list_p = (t_list *)malloc(sizeof(t_list));
	if (list_p == NULL)
		return (NULL);
	list_p->content = content;
	list_p->next = NULL;
	return (list_p);
}
