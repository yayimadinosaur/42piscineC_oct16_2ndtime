/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrentze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:48:51 by lbrentze          #+#    #+#             */
/*   Updated: 2016/11/05 05:21:54 by lbrentze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INITIALIZE_H
# define INITIALIZE_H
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_pos
{
	int value;
	int box_r;
	int box_c;
}				t_pos;
t_pos			*create_obj(char nb, int r, int c);
t_pos			***initialize(int argc, char **argv);

#endif
