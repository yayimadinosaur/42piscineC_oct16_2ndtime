/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:11:23 by wfung             #+#    #+#             */
/*   Updated: 2016/10/28 16:35:55 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_countdown(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		ft_putchar(a);
		a++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_countdown();
	return (0);
}
