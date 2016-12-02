/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 19:32:10 by wfung             #+#    #+#             */
/*   Updated: 2016/11/16 20:29:30 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	ft_putstr("source\n");
	ft_putstr(src);
	ft_putchar('\n');
	str = (char*)malloc(sizeof(src) * (i + 1));
	if (src == '\0')
		return ("\0");
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	ft_putstr("result\n");
	ft_putstr(str);
	ft_putchar('\n');
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("builtin test\n%s\n", strdup(argv[1]));
		ft_strdup(argv[1]);
	}
	return (0);
}
