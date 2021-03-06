/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:30:59 by wfung             #+#    #+#             */
/*   Updated: 2016/11/06 22:52:05 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
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
		return (match(&s1[i + 1], &s2[j + 1])) ||
		(match(&s1[i], &s2[j + 1])) || match(&s1[i + 1], &s2[j]);
	}
	if (s2[j] == '*')
	{
		return (match(&s1[i + 1], &s2[j]) || match(&s1[i], &s2[i + 1]));
	}
	return (0);
}
