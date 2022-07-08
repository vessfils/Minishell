/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_create_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:10:40 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:10:45 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>

t_btree		*ft_btree_create_node(void *content)
{
	t_btree	*node;

	if (!(node = malloc(sizeof(t_btree))))
		return (0);
	node->left = 0;
	node->right = 0;
	node->content = content;
	return (node);
}
