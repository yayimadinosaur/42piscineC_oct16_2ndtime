/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 20:06:19 by wfung             #+#    #+#             */
/*   Updated: 2016/11/15 20:18:08 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'z')
			{
				ft_putchar('z');
				ft_putchar('\n');
				return (0);
			}
			i++;
		}
		ft_putchar('z');
		ft_putchar('\n');
	}
	if (argc != 2)
	{
		ft_putchar('z');
		ft_putchar('\n');
	}
	return (0);
}
