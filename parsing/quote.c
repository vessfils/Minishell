/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quote.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:30:36 by vess              #+#    #+#             */
/*   Updated: 2022/06/16 18:18:47 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static int	check_quote(t_list *tmp, t_token_type quote)
{
	t_token *token;
	
	while (tmp)
	{
		token = tmp->content;
		if (token->type == quote)
			return (SUCCESS);
		if (token->type == double_quote)
		tmp = tmp->next;
	}

}

int	deal_quote(t_list **begin)
{
	t_list *todel;
	t_token_type	quote;
	int	ret;

	todel = *begin;
	quote = get_token_type((*begin)->content);	
	ret = check_quote((*begin)->next, quote);
	if (ret == ERROR)
		return (ERROR);

	return (SUCCESS);
}
