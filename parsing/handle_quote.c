/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_quote.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <jcampagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:30:36 by vess              #+#    #+#             */
/*   Updated: 2022/06/18 19:54:08 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
static void	handle_last_token(t_list **begin, t_token_type type)
{
	//t_token_type	*token;
	//t_list			*todel;

	token = (*begin)->content;

	if (token.type == type)
	{
		change_token_type()

	}



		*begin = (*begin)->next;
	ft_list_current_node(&g_info.list_input, begin, clear_token);
}
*/
static int	check_quote(t_list *tmp, t_token_type type_quote)
{
	t_token	*token;

	while (tmp)
	{
		token = tmp->content;
		if (token->type == type_quote)
			return (SUCCESS);
		tmp = tmp->next;
	}
	error_msg("Minishell :", "Missing quote", "around word");
	return (ERROR);
}

int	deal_quote(t_list **begin)
{
	t_list			*todel;
	t_token_type	type_quote;
	int				ret;

	todel = *begin;
	type_quote = get_token_type((*begin)->content);
	ret = check_quote((*begin)->next, type_quote);
	if (ret == ERROR)
		return (ERROR);
	*begin = todel->next;
	ft_list_remove_current_node(&g_info.list_input, todel, clear_token);
	//concate_token_same_type(begin, literal);
	//handle_last_token(*begin, type_quote);
	return (SUCCESS);
}
