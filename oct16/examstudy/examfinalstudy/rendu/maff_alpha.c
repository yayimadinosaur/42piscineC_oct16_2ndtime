/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:40:17 by wfung             #+#    #+#             */
/*   Updated: 2016/11/15 16:09:20 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_alpha(void)
{
	char	y;
	char	x;
	int		i;

	i = 0;
	x = 'a';
	y = 'B';
	while (i < 26)
	{
		if (i % 2 != 0)
		{
			ft_putchar(y);
			y = y + 2;
		}
		else
		{
			ft_putchar(x);
			x = x + 2;
		}
		i++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	maff_alpha();
	return (0);
}
