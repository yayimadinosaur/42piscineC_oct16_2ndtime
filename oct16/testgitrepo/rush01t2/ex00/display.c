/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrentze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:59:35 by lbrentze          #+#    #+#             */
/*   Updated: 2016/11/05 05:02:30 by lbrentze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	display_map(t_pos ***map)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(map[i][j]->value + '0');
			if (j != 8)
				ft_putchar(' ');
			else
				ft_putchar('\n');
			j++;
		}
		i++;
	}
}
