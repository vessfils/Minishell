/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_suffix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:09:42 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:49:57 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		ft_btree_apply_suffix(root->left, applyf);
		ft_btree_apply_suffix(root->right, applyf);
		(*applyf)(root->content);
	}
}

void	ft_test(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		ft_btree_apply_suffix(root->left, applyf);
		(*applyf)(root->content);
		ft_btree_apply_suffix(root->right, applyf);
	}
}
