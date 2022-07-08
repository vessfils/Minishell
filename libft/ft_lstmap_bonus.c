/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:27:00 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:27:01 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*tmp;

	if (!lst)
		return (0);
	if (!(tmp = ft_lstnew((*f)(lst->content))))
		return (0);
	begin = tmp;
	while (lst->next)
	{
		lst = lst->next;
		if (!(tmp->next = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&begin, del);
			return (0);
		}
		tmp = tmp->next;
	}
	return (begin);
}
