# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvisca <mvisca@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/31 17:59:51 by mvisca            #+#    #+#              #
#    Updated: 2025/01/04 15:04:29 by mvisca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			:=	c++

CXXFLAGS	:=	-Wall -Wextra -Werror -std=c++98 -MMD

SRCS		:=	main.cpp			\
				AMateria.cpp		\
				Ice.cpp				\
				Cure.cpp			\
				Character.cpp		\
				MateriaSource.cpp

OBJS		:=	$(SRCS:.cpp=.o)

DEPS		:=	$(OBJS:.o=.d)

TARGET		:=	character

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp Makefile
	$(CXX) $(CXXFLAGS) -c $< -o $@
-include $(DEPS)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re