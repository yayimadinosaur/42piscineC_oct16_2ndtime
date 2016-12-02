/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 20:41:34 by wfung             #+#    #+#             */
/*   Updated: 2016/11/17 20:43:54 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int n;

	n = 128;
	while (n > 0)
	{
		if (octect & n)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		n = n / 2;
	}
}