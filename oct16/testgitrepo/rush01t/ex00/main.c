/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrentze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:44:42 by lbrentze          #+#    #+#             */
/*   Updated: 2016/11/05 04:58:05 by lbrentze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "initialize.h"
#include "check_valid.h"
#include "solve.h"
#include "display.h"

int		main(int argc, char **argv)
{
	int		i;
	t_pos	***map;

	i = 0;
	map = check_input(argc, argv);
	if (!map)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	search(0, 0, &i, map);
	if (i != 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	map = find_s(0, 0, map);
	display_map(map);
	return (0);
}
