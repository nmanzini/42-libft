/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:43:12 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/22 17:58:41 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *temp;
	t_list *new;
	t_list *start;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	new = ft_lstnew(temp->content, temp->content_size);
	if (!new)
		return (NULL);
	lst = lst->next;
	start = new;
	while (lst)
	{
		temp = f(lst);
		new->next = ft_lstnew(temp->content, temp->content_size);
		if (!new->next)
			return (NULL);
		lst = lst->next;
		new = new->next;
	}
	return (start);
}
