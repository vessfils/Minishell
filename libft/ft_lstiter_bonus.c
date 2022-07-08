/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:26:49 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:26:51 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

void	ft_list_iteration(t_list *lst, int (*f)())
{
	int	ret;

	while (lst)
	{
		ret = (*f)(&lst);
		if (ret == STOP)
			return ;
		lst = lst->next;
	}
}
