/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:26:44 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:26:46 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
		lst = 0;
	}
}

void		ft_dlst_del_one(t_list *lst, void (*del)(void *))
{
	t_list	*prev;
	t_list	*next;

	if (lst)
	{
		prev = lst->prev;
		next = lst->next;
		lst->next = 0;
		lst->prev = 0;
		(*del)(lst->content);
		if (prev)
			prev->next = next;
		if (next)
			next->prev = prev;
		free(lst);
		lst = 0;
	}
}
