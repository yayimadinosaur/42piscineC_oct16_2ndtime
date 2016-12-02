/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:40:19 by wfung             #+#    #+#             */
/*   Updated: 2016/11/16 14:04:15 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'M') ||
				(str[i] >= 'a' && str[i] <= 'm'))
		{
			str[j] = str[i] + 13;
			ft_putchar(str[j]);
		}
		else if ((str[i] >= 'N' && str[i] <= 'Z') ||
				(str[i] >= 'n' && str[i] <= 'z'))
		{
			str[j] = str[i] - 13;
			ft_putchar(str[j]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		rot_13(argv[1]);
		ft_putchar('\n');
	}
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	return (0);
}
