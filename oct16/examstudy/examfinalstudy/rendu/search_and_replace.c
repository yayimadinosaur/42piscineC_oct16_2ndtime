/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 22:19:28 by wfung             #+#    #+#             */
/*   Updated: 2016/11/16 13:05:33 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	search_n_replace(char *s1, char *s2, char *s3)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[0])
		{
			ft_putchar(s3[0]);
		}
		if (s1[i] != s2[0])
		{
			ft_putchar(s1[i]);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		ft_putchar('\n');
	}
	if (argc == 4)
	{
		search_n_replace(argv[1], argv[2], argv[3]);
	}
	return (0);
}
