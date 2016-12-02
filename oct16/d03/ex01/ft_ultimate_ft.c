/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:51:02 by wfung             #+#    #+#             */
/*   Updated: 2016/10/28 17:05:16 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = "42";
	ft_putchar(nbr);
}

int		main(void)
{
	ft_ultimate_ft();
	return (0);
}
