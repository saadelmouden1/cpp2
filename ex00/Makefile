NAME = fixed


CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f
HEADERS = Fixed.hpp
SRCS = Fixed.cpp main.cpp


OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp $(HEADERS)
		$(CPP) $(CPPFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS) 
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)


clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re : fclean all