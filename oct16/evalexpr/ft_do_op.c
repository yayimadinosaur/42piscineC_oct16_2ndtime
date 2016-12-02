/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 21:58:59 by wfung             #+#    #+#             */
/*   Updated: 2016/11/13 23:33:10 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_do_op(int result1, char *oper, int result2)
{
	int end_result;

	if (oper == '+')
		end_result = result1 + result2;
	if (oper == '-')
		end_result = result1 - result2;
	if (oper == '*')
		end_result = result1 * result2;
	if (oper == '/')
		end_result = result1 / result2;
	if (oper == '%')
		end_result = result1 % result2;
	return (end_result);
}
