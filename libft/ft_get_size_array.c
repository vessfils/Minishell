/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_size_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:15:58 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:16:01 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_get_size_array(char **array, int *line, int *column)
{
	int		i;
	int		j;

	i = 0;
	while (array[i])
	{
		j = (int)ft_strlen(array[i]);
		if (j > *column)
			*column = j;
		i++;
	}
	*line = i;
}
