/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomtest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 19:03:02 by wfung             #+#    #+#             */
/*   Updated: 2016/11/14 19:40:55 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rev_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
	rev_alpha(argv[1]);
	ft_putchar('\n');
	}
	if (argc != 2)
		ft_putchar('\n');
	return (0);
}
