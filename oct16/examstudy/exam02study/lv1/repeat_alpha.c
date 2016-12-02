/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 15:45:51 by wfung             #+#    #+#             */
/*   Updated: 2016/11/11 16:17:32 by wfung            ###   ########.fr       */
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
	int counter;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			counter = 'A';
			while (counter <= str[i])
			{
				ft_putchar(str[i]);
				counter ++;
			}
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			counter = 'a';
			while (counter <= str[i])
			{
				ft_putchar(str[i]);
				counter++;
			}	
		}
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argc == 2 && argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		   repeat_alpha(
	}
	ft_putchar('\n');
}
