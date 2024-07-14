# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/11 19:16:23 by ymafaman          #+#    #+#              #
#    Updated: 2024/07/14 03:15:33 by ymafaman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP_FILES = main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJ_FILES = $(CPP_FILES:.cpp=.o)

EXEC = exec

all : $(EXEC)

$(EXEC) : $(OBJ_FILES)
	$(CPP) $(FLAGS) $(OBJ_FILES) -o $(EXEC)

%.o: %.cpp Fixed.hpp Point.hpp bsp.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ_FILES)

fclean : clean
	rm -rf $(EXEC)

re : fclean all

.PHONY : clean