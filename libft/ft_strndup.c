/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:34:21 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:34:22 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strndup(const char *s1, int n)
{
	char	*dup;
	int		i;
	int		size_s1;

	i = 0;
	size_s1 = (int)ft_strlen(s1);
	if ((n > size_s1))
		n = size_s1;
	if (!(dup = malloc(sizeof(char) * (n + 1))))
	{
		ft_putstr_fd("error:malloc failure\n", 1);
		return (0);
	}
	while (i < n)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
