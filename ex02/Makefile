# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 18:47:48 by kkouaz            #+#    #+#              #
#    Updated: 2023/12/22 18:55:26 by kkouaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mstack
CXX = c++
CXXFLAGS = -Wall -Wextra -Werrr -std=c++98
RM = rm -rf
SRC = 
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

