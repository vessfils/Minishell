/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_character_in_word.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:29:20 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:29:23 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nb_character_in_word(char *word)
{
	int count;

	count = 0;
	if (!word)
		return (count);
	while (word[count])
	{
		if (ft_isspace(word[count]))
			return (count);
		count++;
	}
	return (count);
}
