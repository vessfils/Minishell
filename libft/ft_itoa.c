/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:23:13 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:23:16 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	unsigned int	length_n(int n)
{
	unsigned int length;

	length = (n <= 0) ? 1 : 0;
	while (n > 0 || n < 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char					*ft_itoa(int n)
{
	char				*p;
	char				sign;
	unsigned int		length;

	sign = (n < 0) ? '-' : '\0';
	length = length_n(n);
	if (!(p = malloc(sizeof(char) * (length + 1))))
		return (0);
	p[length] = '\0';
	while (length)
	{
		if (n < 0)
			p[--length] = -(n % 10) + '0';
		else
			p[--length] = (n % 10) + '0';
		n = n / 10;
	}
	if (sign)
		p[length] = sign;
	return (p);
}
