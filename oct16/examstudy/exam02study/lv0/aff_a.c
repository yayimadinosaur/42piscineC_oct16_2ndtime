/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 10:12:39 by wfung             #+#    #+#             */
/*   Updated: 2016/11/11 15:48:01 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_aff_a(char *str)
{
	int i;

	i = 0;
	while (str[i] != 'a' || str[i] != '\0')
	{
		if (str[i] == 'a')
		{
			ft_putchar('a');
			ft_putchar('\n');
			return ;
		}
		else if (str[i] == '\0')
		{
			ft_putchar('\n');
			return ;
		}
		else
		{
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc < 2 || argc > 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	else if (argc == 2)
	{
		ft_aff_a(argv[1]);
	}
	return (0);
}
