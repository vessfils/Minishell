/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <vess@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:22:11 by vess              #+#    #+#             */
/*   Updated: 2022/07/08 15:49:39 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nbrlen(int nb)
{
	int	size_nb;
	int	result;

	result = 1;
	size_nb = 0;
	while (result)
	{
		result = nb / 10;
		nb = result;
		size_nb++;
	}
	return (size_nb);
}