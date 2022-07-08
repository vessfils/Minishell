/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_insert_data.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:15:03 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:15:08 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_insert_data(t_btree **root, void *item, int (*cmpf)())
{
	if (!root)
		return ;
	if (!(*root))
	{
		(*root) = ft_btree_create_node(item);
		return ;
	}
	if ((*cmpf)((*root)->content, item) > 0)
	{
		root = &(*root)->left;
		ft_btree_insert_data(root, item, cmpf);
	}
	else if ((*cmpf)((*root)->content, item) < 0)
	{
		root = &(*root)->right;
		ft_btree_insert_data(root, item, cmpf);
	}
}
