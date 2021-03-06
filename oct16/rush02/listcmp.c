/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listcmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:02:59 by biremong          #+#    #+#             */
/*   Updated: 2016/11/13 16:19:38 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int listcmp(t_node *begin_list1, t_node *begin_list2)
{
	t_node *curr_node1;
	t_node *curr_node2;

	curr_node1 = begin_list1;
	curr_node2 = begin_list2;
	while(curr_node1->data == current_node2->data && curr_node1 != NULL)
	{
		curr_node1 = curr_node1->next;
		curr_node2 = curr_node2->next;
	}
	if (curr_node1 == NULL && curr_node2 == NULL)
		return (1);
	else 
		return (0);
}
