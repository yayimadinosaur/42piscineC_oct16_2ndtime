/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 20:30:15 by wfung             #+#    #+#             */
/*   Updated: 2016/11/17 20:41:20 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	octet = ((octet & 0xF0) >> 4 | (octet & 0x0F) << 4);
	octet = ((octet & 0xCC) >> 2 | (octet & 0x33) << 2);
	octet = ((octet & 0xAA) >> 1 | (octet & 0x55) << 1);
	return (octet);
}
