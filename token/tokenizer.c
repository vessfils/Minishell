/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokenizer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 23:24:05 by vess              #+#    #+#             */
/*   Updated: 2022/06/06 22:34:14 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

static t_token			g_tab_token[] = {
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
	int				i;
	t_token_type	type;
	char			*str;

	i = -1;
	type = literal;
	while (g_tab_token[++i].value)
	{
		str = g_tab_token[i].value;
		if (str[0] == charset)
		{
			type = g_tab_token[i].type;
			return (type);
		}
	}
	return (type);
}
/*
typedef struct s_token
{
	void			*value;
	t_token_type	type;
}					t_token;


typedef struct s_info
{
	t_list			*list_env;
	void			*ptr;
	t_list			*list_input;
	t_list			*list_path;
	char			**tab_var_env;
	int				ret;
}					t_info;
*/

void	tokenizer(char *input)
{
	t_list				*new;
	char				*value;
	t_token				*token;
	t_token_type		type;

	value = ft_strdup(input);
	if (!value)
		exit(0);
	type = define_type(value[0]);
	token = create_token(value, type);
	if (!(new = ft_lstnew(token)))
		exit(0);
	ft_lstadd_back(&g_info.list_input, new);

	printf("%s", (char *)g_info.list_input->content);
	

}




