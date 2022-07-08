/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_double_array.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:08:54 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:20:29 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_free_double_array(void *ptr)
{
	int		line;
	char	**array;

	array = (char **)ptr;
	line = 0;
	if (!array)
		return ;
	while (array[line])
	{
		ft_bzero(array[line], ft_strlen(array[line]));
		free(array[line]);
		array[line] = 0;
		line++;
	}
	free(array);
	array = 0;
}
