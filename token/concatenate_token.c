/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concatenate_token.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:24:35 by vess              #+#    #+#             */
/*   Updated: 2022/06/24 13:38:47 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_token	*concatenate_2token(t_token *token1, t_token *token2,
	t_token_type type)
{
	t_token	*join;
	char	*t1;
	char	*t2;
	char	*new;

	t1 = token1->value;
	t2 = token2->value;
	new = ft_strjoin(t1, t2);
	if (!new)
		exit(free_all(&g_info, ERROR));
	join = create_token(new, type);
	return (join);
}

void	concatenate_sametype(t_list **begin, t_token_type type)
{
	t_token	*tmp;
	t_list	*todel;

	while (begin && *begin && (*begin)->next)
	{
		if (get_token_type((*begin)->content) != type)
			return ;
		if (get_token_type((*begin)->next->content) != type)
			return ;
		tmp = (*begin)->next->content;
		tmp = concatenate_2token((*begin)->content, tmp, type);
		todel = *begin;
		*begin = todel->next;
		clear_token((*begin)->content);
		(*begin)->content = tmp;
		ft_list_remove_current_node(&g_info.list_input, todel, clear_token);
	}
}

