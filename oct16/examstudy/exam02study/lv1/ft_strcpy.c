/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 16:30:21 by wfung             #+#    #+#             */
/*   Updated: 2016/11/11 16:41:00 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2 != '\0')
	{
		s1[i] == s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

