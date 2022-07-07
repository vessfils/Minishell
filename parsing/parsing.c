/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:50:19 by vess              #+#    #+#             */
/*   Updated: 2022/07/07 16:46:51 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	check_input1(t_list **begin)
{
	t_token	*token;

	while (*begin && begin)
	{
		token = (*begin)->content;
		if (token->type == single_quote || token->type == double_quote)
		{
			if (deal_quote(begin) == ERROR)
				return (ERROR);
		}
		else if (token->type != space)
		{
			if (handle_variable(begin) == ERROR)
				return (ERROR);
			concatenate_sametype(begin, get_token_type((*begin)->content));
		}
		*begin = (*begin)->next;
	}
	return (SUCCESS);
}

int	parsing(t_list *cmd)
{
	if (check_input1(&cmd) != SUCCESS)
		return (ERROR);
	return (SUCCESS);
}
