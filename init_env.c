/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:18:14 by vess              #+#    #+#             */
/*   Updated: 2022/06/24 13:56:33 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_list	*init_env(char **env)
{
	int		index;
	t_list	*begin;
	t_list	*new;
	char	*str;

	if (!env || !*env)
		return (0);
	begin = 0;
	index = -1;
	while (env[++index])
	{
		str = ft_strdup(env[index]);
		if (!str)
			exit(free_all(&g_info, ERROR));
		new = ft_lstnew(str);
		if (!new)
			exit(free_all(&g_info, ERROR));
		ft_lstadd_back(&begin, new);
	}
	return (begin);
}
