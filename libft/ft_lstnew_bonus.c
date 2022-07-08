/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:27:05 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:27:07 by vess             ###   ########.fr       */
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
