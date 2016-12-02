/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ben_list_files.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 15:12:03 by biremong          #+#    #+#             */
/*   Updated: 2016/11/13 15:14:35 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void create_node(char c)
{
    t_node *new_node;

    new_node = (t_node *)malloc(sizeof(t_node));
    new_node->data = c;
    new_node->next = NULL;
    return ;
}


void push_node(t_node **begin_list, char c)
{
    t_node *current_node;
    t_node *new_node;

    new_node = create_node(c);
    current_node = *begin_list;
    if (current_node == NULL)
    {
        *begin_list = new_node;
    }
    else
    {
        while (current_node->next)
        {
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }
    return ;
}
