/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:52:02 by mkayumba          #+#    #+#             */
/*   Updated: 2022/06/24 13:49:51 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void *content)
{
	t_list	*p;

	p = NULL;
	p = malloc(sizeof(t_list));
	if (!p)
	{
		ft_putstr_fd("error:\nmalloc failure\n", 1);
		return (0);
	}
	if (p)
	{
		p->next = 0;
		p->prev = 0;
		p->content = content;
	}
	return (p);
}
