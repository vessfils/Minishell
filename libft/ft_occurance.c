/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_occurance.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:29:35 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:29:38 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_occurance(char *s1, char *s2)
{
	int	index_s1;
	int	index_s2;

	index_s1 = -1;
	while (s1[++index_s1])
	{
		index_s2 = -1;
		while (s2[++index_s2])
		{
			if (s1[index_s1] == s2[index_s2])
				return (1);
		}
	}
	return (0);
}
