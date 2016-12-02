/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_compare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:19:56 by biremong          #+#    #+#             */
/*   Updated: 2016/11/13 18:43:19 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	compare_rushes(t_node *begin_list, int width, int height)
{
	int i;
	t_node *rush_begin;
	void 	(*functions[5])(int, int, t_node**);
	int mult_result;

	functions[0] = &rush00;
	functions[1] = &rush01;
	functions[2] = &rush02;
	functions[3] = &rush03;
	functions[4] = &rush04;
	mult_result = 0;
	i = 0;
	while (i < 5)
	{
		functions[i](width, height, &rush_begin);
		if (listcmp(begin_list, rush_begin))
		{
			print_match(i, width, height, mult_result);
			mult_result = 1;
		}
		i++;
	}
	if (mult_result == 0)
		print_fail();
}
