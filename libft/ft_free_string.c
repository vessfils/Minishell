/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:15:37 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:15:40 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		ft_free_string(void *ptr)
{
	char	*str;

	if (ptr)
	{
		ft_bzero(ptr, ft_strlen(ptr));
		str = (char *)ptr;
		free(str);
		str = 0;
	}
}
