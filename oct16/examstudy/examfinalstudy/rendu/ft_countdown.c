/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:59:32 by wfung             #+#    #+#             */
/*   Updated: 2016/11/15 15:37:16 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_countdown(void)
{
	char x;

	x = '9';
	while (x >= '0')
		ft_putchar(x--);
	ft_putchar('\n');
}

int		main(void)
{
	ft_countdown();
	return (0);
}
