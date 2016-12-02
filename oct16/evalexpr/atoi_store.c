/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_store.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 21:30:08 by wfung             #+#    #+#             */
/*   Updated: 2016/11/13 23:33:03 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	atoi_store_space(char *str)
{
	int i;
	char *num_left;
	char *num_right;
	char *op;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i++] != ' ')
			num_left = (char *)malloc(sizeof(char) * i);
		i++;
		while (str[i++] != ' ')
			op = (char *)malloc(sizeof(char) * i);
		while (str[i++] != '\0')
			num_right = (char *)malloc(sizeof(char) * i);
		{
			while (str[i++] != ' ')
				num_left[i++] = str[i++];
			i++;
			while (str[i++] != ' ')
				op[i++] = str[i++];
			i++;
			while (str[i++] != '\0')
				num_right[i++] = str[i++];
			ft_do_op(atoi(num_left), op, atoi(num_right));
		}
}
