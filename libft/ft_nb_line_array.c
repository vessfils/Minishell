/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_line_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 13:41:25 by mkayumba          #+#    #+#             */
/*   Updated: 2020/09/25 13:42:04 by lenox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_nb_line_array(char **array)
{
	int line;

	line = 0;
	while (array[line])
	{
		line++;
	}
	return (line);
}
