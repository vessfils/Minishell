/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:52:12 by vess              #+#    #+#             */
/*   Updated: 2022/05/18 11:27:23 by vess             ###   ########.fr       */
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

# define NOCOL "\033[0m"
# define RED "\033[1;31m"
# define YEL "\033[1;33m"
# define ORG "\033[0;33m"
# define GRN "\033[1;32m"
# define CIA "\033[1;36m"
# define DGRAY "\033[1;90m"
# define BLU "\033[1;34m"
# define MGN "\033[1;35m"

typedef struct		s_list
{
	void			*content;
	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

typedef enum		e_token_type
{
	and,
	or,
	semicolon,
	simple_redir_left,
	simple_redir_right,
	double_redir_left,
	double_redir_right,
	pipeline,
	option_command,
	single_quote,
	double_quote,
	backslash,
	literal,
	variable,
	space,
}	t_token_type;

typedef struct		s_token
{
	void			*value;
	t_token_type	type;
}					t_token;




#endif