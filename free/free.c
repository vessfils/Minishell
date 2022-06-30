/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:22:33 by vess              #+#    #+#             */
/*   Updated: 2022/06/24 13:33:10 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	clear_token(void *content)
{
	t_token	*token;

	if (!content)
		return ;
	token = (t_token *)content;
	if (token->value && token)
		ft_memdel(&token->value);
	free(token);
	(void)token;
	(void)content;
}


int	free_all(t_info *info, int code_error)
{
	ft_lstclear(&info->list_input, &clear_token);
	info->list_input = 0;
	if (code_error == ERROR)
	{
		ft_lstclear(&info->list_env, &ft_free_string);
		info->list_env = 0;
	}
	ft_lstclear(&info->list_path, &ft_free_string);
	info->list_path = 0;
	free(info->tab_var_env);
	info->tab_var_env = 0;
	return (info->ret);
}
