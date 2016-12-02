/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 20:35:20 by wfung             #+#    #+#             */
/*   Updated: 2016/11/17 13:25:50 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_inter(char *s1, char *s2)
{
	int i;
	int j;
	int right_flag;

	i = 0;
	j = 0;
	right_flag = 0;
	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j] && right_flag != 1)
			{
				ft_putchar(s1[i]);
				right_flag = 1;
			}
			j++;
		}
		j = 0;
		right_flag = 0;
		i++;
	}
}

char	*check_repeats(char *s1)
{
	int		i;
	int		j;
	int		k;
	int		left_flag;

	i = 0;
	j = 0;
	k = 0;
	left_flag = 0;
	while (s1[i] != '\0')
	{
		k = i;
		while (k >= 0)
		{
			j = k;
			if (s1[j] == s1[i])
				left_flag++;
			j--;
		}
		if (left_flag == 0)
			s1[j] = s1[i];
		i++;
		left_flag = 0;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_inter((check_repeats(argv[1])), argv[2]);
		ft_putchar('\n');
	}
	if (argc != 3)
	{
		ft_putchar('\n');
	}
	return (0);
}
