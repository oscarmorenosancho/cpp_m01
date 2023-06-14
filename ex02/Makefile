# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/14 09:42:47 by omoreno-          #+#    #+#              #
#    Updated: 2023/06/14 14:54:45 by omoreno-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= HITHISISBRAIN

MAINSRC :=	main.cpp

MAINOBJ := 	$(MAINSRC:.cpp=.o)

CC	:= 	@c++
RM	= 	@rm -f
CFLAGS := -Wall -Werror -Wextra -std=c++98

all : $(NAME)

%.o : %.cpp Makefile
	@echo "Compiling" $@
	${CC} ${CFLAGS} -c $< -o $@

$(NAME) : ${MAINOBJ} Makefile
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