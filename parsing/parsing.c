/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:50:19 by vess              #+#    #+#             */
/*   Updated: 2022/06/16 10:54:30 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	check_1(t_list **begin)
{
	t_token *token;
	while (*begin && begin)
	{
		token = (*begin)->content;
		if (token->type == single_quote || token->type == double_quote)
		{
			if (deal_quote(begin) == ERROR)
				return (ERROR);
		}
		return (SUCCESS);
	}
	return (SUCCESS);
}