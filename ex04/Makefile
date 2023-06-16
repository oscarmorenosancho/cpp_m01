# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/14 09:42:47 by omoreno-          #+#    #+#              #
#    Updated: 2023/06/16 14:29:03 by omoreno-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= Sed2

CLASSSRC:= 	FileReplace.cpp

MAINSRC :=	main.cpp

CLASSOBJ := $(CLASSSRC:.cpp=.o)
HEADER := 	$(CLASSSRC:.cpp=.hpp)
MAINOBJ := 	$(MAINSRC:.cpp=.o)

TESTFILE := file.txt
TESTFILE2 := file2.txt
NOTEXIST := unknown

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
	$(RM) *.txt
	$(RM) *.txt.replace
	@echo "Cleaned objects"

fclean : clean
	$(RM) $(NAME)
	@echo "Cleaned executable"

re: fclean all

$(TESTFILE):
	@echo "Creating..." '$(TESTFILE)'
	@echo qwerty > $(TESTFILE)
	@echo qwertyqwerty >> $(TESTFILE)
	@echo poiuyt >> $(TESTFILE)

$(TESTFILE2):
	@echo "Creating..." '$(TESTFILE2)'
	@echo qwer > $(TESTFILE2)
	@echo asdf >> $(TESTFILE2)
	@echo zxcv >> $(TESTFILE2)

test: $(NAME) $(TESTFILE)
	@echo Testfile' $(TESTFILE)' "contains:"
	@cat $(TESTFILE)
	./$(NAME) $(TESTFILE) qwerty replacement
	@echo 'Testfile' '$(TESTFILE).replace' "contains:"
	@cat $(TESTFILE)".replace"

test2: $(NAME) $(TESTFILE2)
	@echo Testfile' $(TESTFILE2)' "contains:"
	@cat $(TESTFILE2)
	./$(NAME) $(TESTFILE2) qwerty replacement
	@echo 'Testfile' '$(TESTFILE2).replace' "contains:"
	@cat $(TESTFILE2)".replace"

test3: $(NAME)
	@echo Testfile' $(NOTEXIST)' "not created"
	./$(NAME) $(NOTEXIST) qwerty replacement

.PHONY : clean fclean re all test test2 test3