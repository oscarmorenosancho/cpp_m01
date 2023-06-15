# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/14 09:42:47 by omoreno-          #+#    #+#              #
#    Updated: 2023/06/15 17:13:43 by omoreno-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= Harl2

CLASSSRC:= 	Harl.cpp

MAINSRC :=	main.cpp

CLASSOBJ := $(CLASSSRC:.cpp=.o)
HEADER := 	$(CLASSSRC:.cpp=.hpp)
MAINOBJ := 	$(MAINSRC:.cpp=.o)

CC	:= 	@c++
RM	= 	@rm -f
CFLAGS := -Wall -Werror -Wextra -std=c++98

all : $(NAME)

%.o : %.cpp ${HEADER} Makefile
	@echo "Compiling" $@
	${CC} ${CFLAGS} -c $< -o $@

$(NAME) : ${CLASSOBJ} ${MAINOBJ} ${HEADER} Makefile
	@echo "Linking" $@
	${CC} ${CFLAGS} ${CLASSOBJ} ${MAINOBJ} -o $@

clean :
	$(RM) $(CLASSOBJ)
	$(RM) $(MAINOBJ)
	@echo "Cleaned objects"

fclean : clean
	$(RM) $(NAME)
	@echo "Cleaned executable"

re: fclean all

.PHONY : clean fclean re all