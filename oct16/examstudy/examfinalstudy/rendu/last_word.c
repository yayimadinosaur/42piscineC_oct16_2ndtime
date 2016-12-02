/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:17:07 by wfung             #+#    #+#             */
/*   Updated: 2016/11/17 18:10:17 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_last_word(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (str[i] < 33)
	{
		i--;
	}
	while (str[i] > 33)
	{
		i--;
	}
	if (str[i] < 33)
		i = i + 1;
	while (str[i] >= 33)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_last_word(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
