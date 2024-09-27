# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: farias <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 14:49:23 by farias            #+#    #+#              #
#    Updated: 2024/07/27 14:49:30 by farias           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
MAIN_DICTIONARY = numbers.dict

$(NAME):
	@gcc -Wall -Wextra -Werror main.c all.c aux_all.c aux_all_basics.c check_number.c handle_buffer_1.c handle_buffer_2.c read_dict.c ustring.c -o $(NAME)

clean:
	@find . -name $(NAME) -delete

fclean: clean
	@find data -name *.dict -not -name $(MAIN_DICTIONARY) -delete
	
