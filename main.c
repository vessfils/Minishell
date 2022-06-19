/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <jcampagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 23:07:47 by vess              #+#    #+#             */
/*   Updated: 2022/06/19 19:27:32 by jcampagn         ###   ########.fr       */
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
	(void)ac;
	(void)av;
	g_info.list_env = init_env(env);
	g_info.list_input = 0;
	g_info.list_path = 0;
	g_info.ret = 0;
	g_info.tab_var_env = 0;
	//printf("%s\n", (char *)((t_token *)new->content)->value);
//	printf("%s\n", (char *)((t_token *)g_info.list_input->content)->value);
/*
	while (g_info.list_input->next)
	{
		printf("%s\n", (char *)g_info.list_input->content);
		g_info.list_input = g_info.list_input->next;
	}
*/
/*
	t_token *token1;
	t_token *token2;
	t_token *token3;
	t_list *begin;
	t_list *new1;
//	t_list *new2;
//	t_list *new3;
	begin = NULL;
	token1 = create_token(ft_strdup("42"), literal);
	token2 = create_token(ft_strdup("43"), literal);
	token3 = create_token(ft_strdup("|"), literal);
	

	new1 = ft_lstnew(token1);
	//new2 = ft_lstnew(token2);
	//new3 = ft_lstnew(token3);
	ft_lstadd_back(&g_info.list_input, new1);
//	ft_lstadd_back(&g_info.list_input, new2);
	//ft_lstadd_back(&g_info.list_input, new3);
	//concatenate_sametype(&g_info.list_input, literal);
	change_token_type(&g_info.list_input, 13);
	while (g_info.list_input)
	{
		//printf("%s\n", (char *)((t_token *)g_info.list_input->content)->value);
		printf("%u\n", (int)((t_token *)g_info.list_input->content)->type);
		g_info.list_input = g_info.list_input->next;
	}

*/
	while (42)
	{
		prompt();
		//printf("Hello");
		parsing(g_info.list_input);
		//printf("%s", (char *)((t_token *)g_info.list_input->content)->value);
		//printf("%s", (char *)((t_token *)g_info.list_input->content)->value);
		//g_info.list_input = g_info.list_input->next;
	}

	return (g_info.ret);
}
