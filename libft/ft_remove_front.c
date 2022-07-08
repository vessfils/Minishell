/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:30:17 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:30:19 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_remove_front(t_list **begin, void (*free_fct)(void *))
{
	t_list	*to_free;

	if (begin && *begin)
	{
		to_free = *begin;
		(*begin) = to_free->next;
		(*free_fct)(to_free->content);
		free(to_free);
	}
}
