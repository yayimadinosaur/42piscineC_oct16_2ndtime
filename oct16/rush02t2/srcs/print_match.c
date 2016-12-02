/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_match.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinfeld <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 17:36:32 by jinfeld           #+#    #+#             */
/*   Updated: 2016/11/13 18:11:25 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_rush(char *rush, char w, char h)
{
		ft_putstr(rush);
		ft_putstr(" [");
		ft_putchar(w);
		ft_putstr("]");
		ft_putstr(" [");
		ft_putchar(h);
		ft_putstr("]");
}

void	print_match(int i, int width, int height, int mult_result)
{
	char *rushes[5];
	char w;
	char h;

	w = width - '0';
	h = height - '0';

	rushes[0] = "rush-00";
	rushes[1] = "rush-01";
	rushes[2] = "rush-02";
	rushes[3] = "rush-03";
	rushes[4] = "rush-04";

	if(!mult_result)
	{
		print_rush(rushes[i], w, h);
	}
	else
	{
		ft_putstr(" || ");
		print_rush(rushes[i], w, h);
	}
}
