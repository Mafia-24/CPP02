# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafia <mafia@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/11 07:02:09 by mafia             #+#    #+#              #
#    Updated: 2024/07/11 07:02:35 by mafia            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP_FILES = main.cpp Fixed.cpp

OBJ_FILES = $(CPP_FILES:.cpp=.o)

EXEC = exec

all : $(EXEC)

$(EXEC) : $(OBJ_FILES)
	$(CPP) $(FLAGS) $(OBJ_FILES) -o $(EXEC)

%.o: %.cpp Fixed.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ_FILES)

fclean : clean
	rm -rf $(EXEC)

re : fclean all

.PHONY : clean