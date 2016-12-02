/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 10:02:35 by sleung            #+#    #+#             */
/*   Updated: 2016/10/30 11:31:06 by sleung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_putchar(char c);

int	rush(int x, int y)
{
	int c;

	c = 0;
	if (c < x)
	{
		ft_putchar('o');
		c++;
		while ((y - 2) > 0)
		{
			ft_putchar('\n');
			ft_putchar('|');
			y--;
		}
	}
	while (c < x)
	{
		ft_putchar('-');
		c++;
		if (c == x)
		{
			ft_putchar('o');
			return (0);
		}
		if (y == 0)
		{
			ft_putchar('o');
			ft_putchar('\n');
		}
	}
	return (0);
}
