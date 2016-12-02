/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 19:09:29 by sleung            #+#    #+#             */
/*   Updated: 2016/10/30 19:34:50 by sleung           ###   ########.fr       */
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
			if (r == 1 && (c == 1 || c == x))
				ft_putchar('A');
			else if (r == y && (c == 1 || c == x))
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
