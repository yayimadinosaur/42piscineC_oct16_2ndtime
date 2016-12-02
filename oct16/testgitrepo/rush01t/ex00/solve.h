/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrentze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:25:27 by lbrentze          #+#    #+#             */
/*   Updated: 2016/11/05 04:27:04 by lbrentze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_H
# define SOLVE_H
# include "initialize.h"
# include "check_valid.h"

t_pos	***find_s(int r, int c, t_pos ***map);

void	search(int r, int c, int *rs_c, t_pos ***map);

#endif
