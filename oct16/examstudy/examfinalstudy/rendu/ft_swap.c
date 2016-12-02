/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:18:56 by wfung             #+#    #+#             */
/*   Updated: 2016/11/16 13:56:21 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(void)
{
	int *x;
	int *y;
	int x1;
	int y1;

	x1 = 1;
	y1 = 2;
	x = &x1;
	y = &y1;
	ft_putchar(*x + '0');
	ft_putchar('\n');
	ft_putchar(*y + '0');
	ft_putchar('\n');
	ft_swap(x, y);
	ft_putchar(*x + '0');
	ft_putchar('\n');
	ft_putchar(*y + '0');
	ft_putchar('\n');
	return (0);
}
