/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 23:07:47 by vess              #+#    #+#             */
/*   Updated: 2022/06/07 17:40:42 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	prompt(void)
{
	char	buf[2];
	int		r;
	int		i;

	i = 0;
	buf[0] = '\0';
	ft_putstr_fd("->", 1);
	while (buf[0] != '\n')
	{
		r = read(0, buf, 1);
		buf[r] = '\0';
		if (buf[0] != '\n')
		{
			if (i == 1)
				tokenizer(" ");
			tokenizer(buf);
		}
	}
}

int	main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;
	t_token *token;
	t_list				*new;
	t_list				*new1;
	
	new = 0;
	new1 = 0;
	token = 0;
	//char * input = "42";
	
	g_info.list_env = init_env(env);
	g_info.list_input = 0;
	//g_info.list_input->content = 0;
	g_info.list_path = 0;
	g_info.ret = 0;
	g_info.tab_var_env = 0;

/*
token = create_token(input,literal);
new = ft_lstnew(token);
ft_lstadd_back(&g_info.list_input, new);
*/
//printf("%s\n", (char *)g_info.list_input->content);
/*
	while (g_info.list_input->next)
	{
		printf("%s\n", (char *)g_info.list_input->content);
		g_info.list_input = g_info.list_input->next;
	}
*/
	
	/*
	while (42)
	{
		prompt();
	}
	*/
	return (0);
}
