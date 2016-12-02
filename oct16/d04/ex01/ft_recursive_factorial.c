/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 18:27:49 by wfung             #+#    #+#             */
/*   Updated: 2016/10/29 21:53:14 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 0  && nb < 13)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
