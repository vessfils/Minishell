/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:37:24 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:37:25 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int index_s;

	index_s = (int)ft_strlen(s);
	while (index_s >= 0)
	{
		if (s[index_s] == c)
			return (s + index_s);
		index_s++;
	}
	return (0);
}
