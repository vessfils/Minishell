/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:52:12 by vess              #+#    #+#             */
/*   Updated: 2022/07/23 17:41:55 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <errno.h>
# include <sys/types.h>
# include <unistd.h>
# include "libft.h"

# define NOCOL "\033[0m"
# define RED "\033[1;31m"
# define YEL "\033[1;33m"
# define ORG "\033[0;33m"
# define GRN "\033[1;32m"
# define CIA "\033[1;36m"
# define DGRAY "\033[1;90m"
# define BLU "\033[1;34m"
# define MGN "\033[1;35m"

# define ERROR -1
# define SUCCESS 0

typedef enum e_token_type
{
	and,
	or,
	//semicolon,
	simple_redir_left,
	simple_redir_right,
	double_redir_left,
	double_redir_right,
	pipeline,
	option_command,
	single_quote,
	double_quote,
//	backslash,
	literal,
	variable,
	space,
}	t_token_type;

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

//variable globale
extern t_info				g_info;
t_token			*create_token(void *token_value, t_token_type token_type);
void			*get_token_value(t_token *token);
t_token_type	get_token_type(t_token *token);
t_token_type	define_type(char charset);
void			clear_token(void *content);
void			tokenizer(char *input);
void			change_token_type(t_list **begin, t_token_type new_type);
t_token			*concatenate_2token(t_token *token1, t_token *token2,
					t_token_type type);
void			concatenate_sametype(t_list **begin, t_token_type type);
int				check_input1(t_list **begin);
int				deal_quote(t_list **begin);
int				parsing(t_list *cmd);
void			error_msg(char *cmd, char *arg, char *msg);
t_list			*init_env(char **env);
int				free_all(t_info *info, int code_error);
char			*get_var_value(t_list *listenv, char *name);
int				handle_variable(t_list **current);

#endif
