/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:50:20 by wfung             #+#    #+#             */
/*   Updated: 2016/11/04 13:59:00 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;

	str2 = ".00 A.M. AND ";
	str3 = ".00 A.M.";
	str4 = ".00 P.M.";
	str5 = ".00 P.M. AND ";
	str1 = "THE FOLLOWING TAKES PLACE BETWEEN ";
	if (hour > 0 && hour < 11)
		printf("%s%i%s%i%s\n", str1, hour, str2, (hour + 1), str3);
	else if (hour == 11)
		printf("%s%i%s%i%s\n", str1, hour, str2, 12, str4);
	else if (hour >= 12 && hour < 22)
		printf("%s%i%s%i%s\n", str1, (hour - 11), str5, (hour - 10), str4);
	else if (hour == 22)
		printf("%s%i%s%i%s\n", str1, 10, str5, 11, str4);
	else if (hour == 23)
		printf("%s%i%s%i%s\n", str1, 11, str5, 12, str3);
	else if (hour == 0 || hour == 24)
		printf("%s%i%s%i%s\n", str1, 12, str2, 1, str3);
}
