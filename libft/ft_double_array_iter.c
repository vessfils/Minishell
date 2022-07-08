/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_array_iter.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:15:20 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:15:22 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_double_array_iter(char **array, void (*fct)())
{
	int index;

	index = 0;
	while (array[index])
	{
		(*fct)(array[index]);
		index++;
	}
}
