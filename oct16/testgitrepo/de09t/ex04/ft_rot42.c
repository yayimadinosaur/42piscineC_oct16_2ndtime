/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:53:39 by wfung             #+#    #+#             */
/*   Updated: 2016/11/04 16:47:10 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'J')
		{
			str[i] = str[i] + 16;
		}
		else if (str[i] >= 'K' && str[i] <= 'Z')
		{
			str[i] = str[i] - 10;
		}
		else if (str[i] >= 'a' && str[i] <= 'j')
		{
			str[i] = str[i] + 16;
		}
		else if (str[i] >= 'k' && str[i] <= 'z')
		{
			str[i] = str[i] - 10;
		}
		i++;
	}
	return (str);
}
