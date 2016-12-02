/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:24:03 by wfung             #+#    #+#             */
/*   Updated: 2016/11/08 21:54:02 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int *array;

	i = 0;
	array = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}
