/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 10:02:35 by sleung            #+#    #+#             */
/*   Updated: 2016/10/30 17:30:47 by sleung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int c;
	int r;

	c = 1;
	r = 1;
	while (y >= r && x >= c)
	{
		while (x >= c)
		{
			if ((x == c || c == 1) && (r == 1 || r == y))
				ft_putchar('o');
			else if (y == r || r == 1)
				ft_putchar('-');
			else if (x != c && c != 1 && y != r && r != 1)
				ft_putchar(' ');
			else
				ft_putchar('|');
			c++;
		}
		ft_putchar('\n');
		c = 1;
		r++;
	}
}
