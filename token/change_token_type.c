/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_token_type.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <jcampagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 18:35:25 by jcampagn          #+#    #+#             */
/*   Updated: 2022/06/18 18:42:56 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	change_token_type(t_list **begin, t_token_type new_type)
{
	t_token	*new;

	if (!*begin || !begin)
		return ;
	new = (*begin)->content;
	if (new->type != new_type)
		new->type = new_type;
}
