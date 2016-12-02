/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:26:11 by wfung             #+#    #+#             */
/*   Updated: 2016/11/17 20:49:09 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		y;
	char	x;

	i = 0;
	y = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (y < i)
	{
		x = str[y];
		str[y] = str[i];
		str[i] = x;
		i--;
		y++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("input str: '%s'\n", argv[1]);
		printf("strrev str: '%s'\n", ft_strrev(argv[1]));
	}
	return (0);
}
