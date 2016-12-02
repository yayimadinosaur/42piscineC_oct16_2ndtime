/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 19:10:05 by wfung             #+#    #+#             */
/*   Updated: 2016/10/27 21:05:43 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putalot(char a, char b, char c, char d)
{

}

void	ft_print_combo2(void)
{
	char i;
	char j;
	char k;
	char l;

	i = '0';
	j = '0';
	k = '0';
	l = '0';
	while (i == '9' && j == '8' && k == '9' && l < '8'  )
	{
		while ( i < 
		ft_putchar(i, j, ' ', k, l, ',', ' ')
			if ()
			{
				l++;
				b = 0;
			}
	}
}

int		main(void)
{
	ft_print_combo2();
	return (0);
}
