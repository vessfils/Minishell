/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:26:33 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:26:35 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst)
		new->next = *alst;
	else
		new->next = 0;
	*alst = new;
}

void	ft_dlstadd_front(t_list **alst, t_list *new)
{
	if (alst)
	{
		new->next = *alst;
		(*alst)->prev = new;
	}
	else
		new->next = 0;
	*alst = new;
}
