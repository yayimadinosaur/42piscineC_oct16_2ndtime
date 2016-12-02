/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dimensions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 15:22:37 by biremong          #+#    #+#             */
/*   Updated: 2016/11/13 18:10:21 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		get_width(t_node *begin_list)
{
	t_node *current_node;
	int count;

	count = 0;
	if (begin_list == NULL)
		return (count);
	current_node = begin_list;
	while (current_node->data != '\n')
	{
		count++;
		current_node = current_node->next;
	}
	return (count);
}



int		get_height(t_node *begin_list)
{
	t_node *current_node;
	int count;

	count = 0;
	if (begin_list == NULL)
		return (count);
	current_node = begin_list;
	while (current_node != NULL)
	{
		if (current_node->data == '\n')
			count++;
		current_node = current_node->next;
	}
	return (count);
}
