/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_chars.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinfeld <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:17:50 by jinfeld           #+#    #+#             */
/*   Updated: 2016/11/13 16:18:44 by jinfeld          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ben_rush.h"

int		rush_chars(int x, char left, char mid, char right, t_node **begin_list)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (x > 1)
		{
			if (i == 0)
				push_node(&begin_list, left);
			if (i < (x - 1) && i != 0)
				push_node(&begin_list, mid);
			if (i == (x - 1))
			{
				push_node(&begin_list, right);
				push_node(&begin_list, '\n');
			}
		}
		else
		{
			push_node(&begin_list, left);
			push_node(&begin_list, '\n');
		}
		i++;
	}
	return (0);
}
