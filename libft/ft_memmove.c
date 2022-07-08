/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:27:52 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:27:54 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p_dest;
	unsigned char	*p_src;

	i = 0;
	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	if (src == dest)
		return (dest);
	if (p_dest > p_src)
	{
		while (++i <= n)
			p_dest[n - i] = p_src[n - i];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
