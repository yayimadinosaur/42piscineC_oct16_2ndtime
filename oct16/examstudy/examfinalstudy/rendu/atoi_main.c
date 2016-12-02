/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:22:01 by wfung             #+#    #+#             */
/*   Updated: 2016/11/16 19:30:44 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("ft_atoi = %d\n", ft_atoi(argv[1]));
		printf("atoi = %d\n", atoi(argv[1]));
	}
	else if (argc != 2)
	{
		printf("%c", 'x');
	}
	return (0);
}
