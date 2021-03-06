/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:38:36 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:38:37 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int	is_set(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	length;
	char	*p;
	size_t	i;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (is_set(set, *s1))
		s1++;
	length = ft_strlen(s1);
	while (length && is_set(set, s1[--length]))
		;
	if (!(p = malloc(sizeof(char) + (length + 1))))
		return (0);
	while (i <= length)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
