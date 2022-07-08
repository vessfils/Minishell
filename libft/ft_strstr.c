/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:38:30 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:38:32 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] && str[i] && to_find[i] == str[i])
		i++;
	if (to_find[i] && str[i] && to_find[i] != str[i])
		return (ft_strstr(str + 1, to_find));
	if (!to_find[i] && str[i])
		return (str);
	if (!to_find[i] && !str[i])
		return (str);
	return (0);
}
