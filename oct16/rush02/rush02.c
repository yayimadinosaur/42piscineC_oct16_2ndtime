/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinfeld <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:33:52 by jinfeld           #+#    #+#             */
/*   Updated: 2016/11/13 16:22:24 by jinfeld          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ben_rush.h"

int		rush02(int x, int y, t_node **begin_list)
{
	int i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			rush_chars(x, 'A', 'B', 'A', &begin_list);
		}
		if (i < (y - 1) && i != 0)
		{
			rush_chars(x, 'B', ' ', 'B', &begin_list);
		}
		if (y > 1 && i == (y - 1))
		{
			rush_chars(x, 'C', 'B', 'C', &begin_list);
		}
		i++;
	}
	return (0);
}
