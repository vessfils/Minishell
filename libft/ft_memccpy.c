/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:27:15 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:27:18 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *p_dest;
	unsigned char *p_src;

	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	while (n)
	{
		*p_dest = *p_src;
		if (*p_src == (unsigned char)c)
			return (p_dest + 1);
		p_dest++;
		p_src++;
		n--;
	}
	return (0);
}
