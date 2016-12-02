/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:37:17 by wfung             #+#    #+#             */
/*   Updated: 2016/11/14 12:49:00 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_map_first_line(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == 'o' || str[i] == 'x' || str[i] >= '0')
		return (1);
	else
		return (0);
}
//only checks the first line description of map
