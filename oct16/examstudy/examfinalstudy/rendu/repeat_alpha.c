/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 20:18:40 by wfung             #+#    #+#             */
/*   Updated: 2016/11/15 22:01:16 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			j = str[i] - 'A';
		else if (str[i] >= 'a' && str[i] <= 'z')
			j = str[i] - 'a';
		else
			j = 0;
		while (j >= 0)
		{
			ft_putchar(str[i]);
			j--;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
		ft_putchar('\n');
	}
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	return (0);
}
