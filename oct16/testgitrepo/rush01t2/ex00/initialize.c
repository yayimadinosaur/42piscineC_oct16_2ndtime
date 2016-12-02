/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrentze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:51:16 by lbrentze          #+#    #+#             */
/*   Updated: 2016/11/05 05:21:00 by lbrentze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "initialize.h"

t_pos	*create_obj(char nb, int r, int c)
{
	t_pos *rs;

	rs = (t_pos*)malloc(sizeof(t_pos));
	if (nb != '0')
		rs->value = nb - '0';
	else
		rs->value = 0;
	rs->box_r = r / 3;
	rs->box_c = c / 3;
	return (rs);
}

t_pos	***initialize(int argc, char **argv)
{
	int		i;
	int		j;
	t_pos	***rs;
	t_pos	**tmp;

	i = 0;
	if (argc != 10)
		return (0);
	rs = (t_pos***)malloc(sizeof(t_pos***) * 9);
	while (i < 9)
	{
		j = 0;
		tmp = (t_pos**)malloc(sizeof(t_pos*) * 9);
		while (j < 9)
		{
			tmp[j] = create_obj(argv[i + 1][j], i, j);
			j++;
		}
		rs[i] = tmp;
		i++;
	}
	return (rs);
}
