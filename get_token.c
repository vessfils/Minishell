/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_token.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:48:14 by vess              #+#    #+#             */
/*   Updated: 2022/05/18 11:48:27 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	*get_token_value(t_token *token)
{
	return (token->value);
}

t_token_type	get_token_type(t_token *token)
{
	return (token->type);
}