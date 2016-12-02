/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 23:02:03 by wfung             #+#    #+#             */
/*   Updated: 2016/11/06 23:19:10 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (s1[i] == '\0' && s2[j] == '\0')
	{
		return (1);
	}
	if (s2[j] == '*' && s2[j + 1] != '\0' && s1[i] == '\0')
	{
		return (0);
	}
	if (s1[i] == s2[j])
	{
		return (nmatch(&s1[i + 1], &s2[j + 1])) ||
		(nmatch(&s1[i], &s2[j + 1])) || nmatch(&s1[i + 1], &s2[j]);
	}
	if (s2[j] == '*')
	{
		return (nmatch(&s1[i + 1], &s2[j]) +  nmatch(&s1[i], &s2[i + 1]));
	}
	return (0);
}