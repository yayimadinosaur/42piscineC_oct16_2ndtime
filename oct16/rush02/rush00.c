/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinfeld <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:32:57 by jinfeld           #+#    #+#             */
/*   Updated: 2016/11/13 16:21:23 by jinfeld          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ben_rush.h"

int		rush00(int x, int y, t_node **begin_list)
{
	int i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			rush_chars(x, 'o', '-', 'o', &begin_list);
		}
		if (i < (y - 1) && i != 0)
		{
			rush_chars(x, '|', ' ', '|', &begin_list);
		}
		if (y > 1 && i == (y - 1))
		{
			rush_chars(x, 'o', '-', 'o', &begin_list);
		}
		i++;
	}
	return (0);
}
