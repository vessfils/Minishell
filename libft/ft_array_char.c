/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:08:54 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:09:00 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		**ft_array_char(int line, int column)
{
	char	**array;
	int		i;

	i = -1;
	if (!(array = malloc(sizeof(char *) * (line + 1))))
		return (0);
	while (++i < line)
	{
		if ((array[i] = ft_strnew(column + 1)) == NULL)
		{
			while (++i <= 0)
			{
				free(array[i]);
				array[i] = 0;
			}
			free(array);
			return (array = 0);
		}
	}
	array[i] = 0;
	return (array);
}
