/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:22:33 by vess              #+#    #+#             */
/*   Updated: 2022/06/05 15:55:21 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
typedef struct s_info
{
	t_list			*list_env;
	void			*ptr;
	t_list			*list_input;
	t_list			*list_path;
	char			**tab_var_env;
	int				ret;
}					t_info;

int	free_all(t_info *info, int code_error)
{





}
