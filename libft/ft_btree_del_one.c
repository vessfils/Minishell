/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_del_one.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:10:52 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:10:55 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_btree_del_one(t_btree *root, void (*del)(void *))
{
	if (root)
	{
		(*del)(root->content);
		root->left = 0;
		root->right = 0;
	}
}
