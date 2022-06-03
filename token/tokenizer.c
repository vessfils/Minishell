/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokenizer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 23:24:05 by vess              #+#    #+#             */
/*   Updated: 2022/05/27 23:39:54 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

static	t_token			g_tab_token[] = {
	{"&", and},
	{"|", pipeline},
	{"<", simple_redir_left},
	{">", simple_redir_right},
	{";", semicolon},
	{"\"", double_quote},
	{"'", single_quote},
	{"\\", backslash},
	{"\f", space},
	{"\n", space},
	{"\r", space},
	{"\t", space},
	{"\v", space},
	{" ", space},
	{"$", variable},
	{0, 0},
};

static t_token_type	define_type(char charset)
{
	int i;
	t_token_type type;
	char	*str;
	i = -1;
	type = literal;
	while (g_tab_token[++i].value)
	{
		str = g_tab_token[i].value;
		if (str[0] == charset)
		{
			type = g_tab_token[i].type;
			return(type);
		}
	}
	return (type);
}




