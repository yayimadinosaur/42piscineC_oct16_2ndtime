/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrentze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 05:03:04 by lbrentze          #+#    #+#             */
/*   Updated: 2016/11/05 05:04:25 by lbrentze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_VALID_H
# define CHECK_VALID_H
# include "initialize.h"

t_pos	***check_input(int argc, char **argv);
int		check_valid(int r, int c, t_pos ***map);

#endif
