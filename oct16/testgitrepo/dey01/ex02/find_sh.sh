# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfung <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/26 21:50:11 by wfung             #+#    #+#              #
#    Updated: 2016/10/26 21:50:54 by wfung            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

find ./ -name "*.sh" | cut -b 4- | rev | cut -d '/' -f1 | cut -b 4- | rev | cat -e
