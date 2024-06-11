# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 04:14:39 by ymafaman          #+#    #+#              #
#    Updated: 2024/05/31 06:13:09 by ymafaman         ###   ########.fr        #
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