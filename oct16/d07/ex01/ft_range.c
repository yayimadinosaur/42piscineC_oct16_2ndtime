/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 21:36:03 by wfung             #+#    #+#             */
/*   Updated: 2016/11/03 21:59:07 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *randompointer;
	int i;
	int minvsmax;

	i = 0;
	if (min >= max)
	{
		randompointer = 0;
		return (randompointer);
	}
	else
	{
		minvsmax = max - min;
		randompointer = (int*)malloc(sizeof(*randompointer) * minvsmax);
		while (min < max)
		{
			randompointer[i] = min;
			min++;
			i++;
		}
	}
	return (randompointer);
}
