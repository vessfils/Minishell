/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_dfs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:10:59 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:48:35 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_dfs_inorder(t_btree *root, void (*ptr_function)())
{
	if (!root)
		return ;
	ft_btree_dfs_inorder(root->left, ptr_function);
	(*ptr_function)(root->content);
	ft_btree_dfs_inorder(root->right, ptr_function);
}
