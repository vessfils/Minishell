/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_token.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:27:27 by vess              #+#    #+#             */
/*   Updated: 2022/06/24 13:39:09 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_token	*create_token(void *token_value, t_token_type token_type)
{
	t_token	*token;
	int		size;

	size = sizeof(t_token);
	token = malloc(size);
	if (!token->value || !token->type)
	{
		exit(free_all(&g_info, ERROR));
	}
	token->value = token_value;
	token->type = token_type;
	return (token);
}
