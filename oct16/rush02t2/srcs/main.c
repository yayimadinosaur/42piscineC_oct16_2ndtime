/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 17:46:35 by biremong          #+#    #+#             */
/*   Updated: 2016/11/13 18:54:59 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		save_stdin(t_node **begin_list)
{
	int ret;
	char buf[1];

	while((ret = read(0, buf, 1)))
	{
		if (ret < 0)
		{
			write(1, "read() error!", 13);
			return (1);
		}
		push_node(begin_list, buf[0]);
	}
	return (0);
}

int		main(void)
{
	t_node *begin_list;
	int height;
	int width;

	begin_list = NULL;
	save_stdin(&begin_list);
	height = get_height(begin_list);
	width = get_width(begin_list);
	compare_rushes(begin_list, width, height);
	return (0);
}
