/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:47:27 by wfung             #+#    #+#             */
/*   Updated: 2016/11/11 16:56:30 by wfung            ###   ########.fr       */
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
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\0')
	{
		i++;
	}
	while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
	{
		ft_putchar(argv[1][i]);
				i++;
	}
	ft_putchar('\n');
	return (0);
}
