/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:07:33 by wfung             #+#    #+#             */
/*   Updated: 2016/11/16 14:30:34 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
			i++;
		else if (str[i] != ' ' || str[i] != '\t')
		{
			ft_putchar(str[i]);
			i++;
			if (str[i] == ' ' || str[i] == '\t')
				return ;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	if (argc == 2)
	{
		first_word(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
