/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:35:08 by wfung             #+#    #+#             */
/*   Updated: 2016/11/06 22:48:04 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	test(char *s1, char *s2)
{
	printf("%s & %s -> %d\n", s1, s2, match(s1, s2));
}

int		main(void)
{
	test("main.c", "*.c");
	test("cat ", "*a*");
	test("catfffffff", "*a*");
	test("asoghaoihjeroijgoisdjgoija", "*a");
	test("ajjjjjjjjajjjjjajjja", "a*");
	test("ajjjjjjajjjjajjja", "*a*");
	test("abcbc", "*b*");
	test("abc", "a**");
	test("abc", "a**b**c**d");
	test("abc", "a**b**c**");
	test("ab", "a**");
	test("ab", "**b");
	test("aaaaaaaba", "**b**");
	test("test", "*s");
	test("abcabc", "bc*");
	test("bccc", "b***");
	test("bbbbb", "***b***");
	test("", "");
	test("", "*");
	test("abc", "*");
	test("abc", "");
	test("bbbbbbbbbbbbbbbbbbbbbbbbbbbb", "******b******");

	test("*", "**");
	test("*", "*");
	test("*a", "*");
	test("**a", "*a");
	test(" ", " ");
	test(" a", " ");
	test("a ", " ");
	test(" a ", " ");
	test("*****", "*");
	test("abc abc", "*");
	test("a * b d", "*");
	test("a * b d", "*b*d");
	test("*****", "*a");
	test("**newr43t4366", "*");
	test("24534645^", "*5");
	test("wert**ertreg32","*e");
	test("*** g * ff *","*");
	test("*gterg*wefewf5*", "*w*");
	return(0);
}
