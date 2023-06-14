# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/14 09:42:47 by omoreno-          #+#    #+#              #
#    Updated: 2023/06/14 12:47:59 by omoreno-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= Moarbrainz!

CLASSSRC:= 	Zombie.cpp

SRC:= 		zombieHorde.cpp

MAINSRC :=	main.cpp

CLASSOBJ := $(CLASSSRC:.cpp=.o)
HEADER := 	$(CLASSSRC:.cpp=.hpp)
OBJ := 		$(SRC:.cpp=.o)
MAINOBJ := 	$(MAINSRC:.cpp=.o)

CC	:= 	c++
RM	= 	@rm -f
CFLAGS := -Wall -Werror -Wextra -std=c++98

all : $(NAME)

%.o : %.cpp ${HEADER} Makefile
	@echo "Compiling" $@
	${CC} ${CFLAGS} -c $< -o $@

$(NAME) : ${CLASSOBJ} ${OBJ} ${MAINOBJ} ${HEADER} Makefile
	@echo "Linking" $@
	${CC} ${CFLAGS} ${CLASSOBJ} ${MAINOBJ} ${OBJ} -o $@

clean :
	$(RM) $(CLASSOBJ)
	$(RM) $(OBJ)
	$(RM) $(MAINOBJ)
	@echo "Cleaned objects"

fclean : clean
	$(RM) $(NAME)
	@echo "Cleaned executable"

re: fclean all

.PHONY : clean fclean re all