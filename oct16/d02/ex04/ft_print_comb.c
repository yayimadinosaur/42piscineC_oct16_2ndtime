/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 15:10:56 by wfung             #+#    #+#             */
/*   Updated: 2016/10/27 21:30:50 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_last(char i, char j, char k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (i == '7')
	{
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	j = '1';
	k = '1';
	while (i < '8')
	{
		while (j < '9')
		{
			while (k < '9')
			{
				k++;
				if (i < j && j < k)
				{
					ft_last(i, j, k);
				}
			}
			j++;
			k = '0';
		}
		i++;
		j = '0';
	}
}
