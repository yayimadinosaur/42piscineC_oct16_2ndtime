/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrentze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:27:24 by lbrentze          #+#    #+#             */
/*   Updated: 2016/11/05 05:23:31 by lbrentze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"

void	destroy(t_pos ***map)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			free(map[i][j]);
			j++;
		}
		free(map[i]);
		i++;
	}
	free(map);
}

t_pos	***copy_map(t_pos ***map)
{
	int		i;
	int		j;
	t_pos	***r;
	t_pos	**tmp;
	t_pos	*o;

	r = (t_pos***)malloc(sizeof(t_pos**) * 9);
	i = 0;
	while (i < 9)
	{
		j = 0;
		tmp = (t_pos**)malloc(sizeof(t_pos));
		while (j < 9)
		{
			o = (t_pos*)malloc(sizeof(t_pos));
			*o = *(map[i][j]);
			tmp[j] = o;
			j++;
		}
		r[i] = tmp;
		i++;
	}
	return (r);
}

t_pos	***find_s(int r, int c, t_pos ***map)
{
	int		i;
	t_pos	***rs;
	t_pos	***cp_map;

	cp_map = copy_map(map);
	i = 0;
	rs = 0;
	if (r == 9)
		return (map);
	if (map[r][c]->value != 0)
	{
		if ((rs = find_s(r + (c + 1) / 9, (c + 1) % 9, cp_map)))
			return (rs);
	}
	else
		while (++i <= 9)
		{
			map[r][c]->value = i;
			cp_map = copy_map(map);
			if (check_valid(r, c, map))
				if ((rs = find_s(r + (c + 1) / 9, (c + 1) % 9, cp_map)))
					return (rs);
			destroy(cp_map);
		}
	return (0);
}

void	search(int r, int c, int *rs_c, t_pos ***map)
{
	int		i;
	t_pos	***cp_map;

	if (*rs_c == 2)
		return ;
	cp_map = copy_map(map);
	i = 0;
	if (r == 9)
	{
		(*rs_c) += 1;
		return ;
	}
	if (map[r][c]->value != 0)
		search(r + (c + 1) / 9, (c + 1) % 9, rs_c, cp_map);
	else
		while (++i <= 9)
		{
			map[r][c]->value = i;
			cp_map = copy_map(map);
			if (check_valid(r, c, map))
				search(r + (c + 1) / 9, (c + 1) % 9, rs_c, cp_map);
			destroy(cp_map);
		}
	return ;
}
