# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    skip.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfung <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/26 21:54:05 by wfung             #+#    #+#              #
#    Updated: 2016/10/26 21:54:15 by wfung            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

ls -l | sed -n 'n;p'
