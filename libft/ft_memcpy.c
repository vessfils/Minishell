/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:27:34 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:27:37 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	if (dest == src)
		return (dest);
	while (n--)
		*(p_dest++) = *(p_src++);
	return (dest);
}
