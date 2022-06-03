/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:18:14 by vess              #+#    #+#             */
/*   Updated: 2022/05/27 22:39:18 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_list	*init_env(char **env)
{
	int	index;
	t_list *begin;
	t_list *new;
	char	*str;

	if (!env || !*env)
		return (0);
	begin = 0;
	index = -1;
	while (env[++index])
	{
		if (!(str = ft_strdup(env[index])))
			exit(1);
		if (!(new = ft_lstnew(str)))
			exit(1);
		ft_lstadd_back(&begin, new);
	}
	return (begin);
}