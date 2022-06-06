/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 23:07:47 by vess              #+#    #+#             */
/*   Updated: 2022/06/06 22:28:51 by vess             ###   ########.fr       */
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
	g_info.list_env = init_env(env);
	g_info.list_input = 0;
	g_info.list_path = 0;
	g_info.ret = 0;
	g_info.tab_var_env = 0;

/*
	while (g_info.list_env->next)
	{
		printf("%s\n", (char *)g_info.list_env->content);
		g_info.list_env = g_info.list_env->next;
	}
*/
	while (42)
	{
		prompt();
	}
	return (0);
}
