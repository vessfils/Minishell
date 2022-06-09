/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concatenate_token.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:24:35 by vess              #+#    #+#             */
/*   Updated: 2022/06/09 14:18:13 by vess             ###   ########.fr       */
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
		exit(0);
	join = create_token(new, type);
	return (join);
}

t_token *concatenate_sametype(t_list **begin, t_token_type type)
{

	t_token *tmp;
	
	while (begin & *begin && (*begin)->next)
	{
		if (get_token_type((*begin)->content) != type)
			exit(0);
		if (get_token_type((*begin)->next->content) != type)
			exit(0);
		tmp = *begin->next->content;
		tmp = concatenate_2token((*begin)->content, tmp);	
		
	}
	
}
