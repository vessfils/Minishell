/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:10:13 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:10:19 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_btree_clear(t_btree *root, void (*del)(void *))
{
	if (!root)
		return ;
	if (root->left || root->right)
	{
		ft_btree_clear(root->left, del);
		ft_btree_clear(root->right, del);
	}
	if (root)
	{
		(*del)(root->content);
		root->left = 0;
		root->right = 0;
		free(root);
		root = 0;
	}
}
