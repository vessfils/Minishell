/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 23:07:47 by vess              #+#    #+#             */
/*   Updated: 2022/06/26 17:49:52 by vess             ###   ########.fr       */
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
			i++;
			if (i == 1)
				tokenizer(" ");
			tokenizer(buf);
		}
	}
}

t_info	g_info;

int	main(int ac, char **av, char **env)
{
	int		i;

	(void)ac;
	(void)av;

	i = 0;
	g_info.list_env = init_env(env);
	g_info.list_input = 0;
	g_info.list_path = 0;
	g_info.ret = 0;
	g_info.tab_var_env = 0;

	while (42)
	{
		prompt();
		parsing(g_info.list_input);

		while (g_info.list_input)
		{
			printf("i = %d %s\n", i, (char *)((t_token *)g_info.list_input->content)->value);
			g_info.list_input = g_info.list_input->next;
			i++;
		}
		exit(free_all(&g_info, 0));
	}
	return (g_info.ret);
}
