/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 19:09:29 by sleung            #+#    #+#             */
/*   Updated: 2016/10/30 19:38:25 by sleung           ###   ########.fr       */
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
			if (c == 1 && (r == 1 || r == y))
				ft_putchar('A');
			else if (c == x && (r == 1 || r == y))
				ft_putchar('C');
			else if (x != c && c != 1 && y != r && r != 1)
				ft_putchar(' ');
			else
				ft_putchar('B');
			c++;
		}
		ft_putchar('\n');
		c = 1;
		r++;
	}
}
