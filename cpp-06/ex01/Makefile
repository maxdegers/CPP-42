NAME		= test-01
	
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3
RM			= rm -rf

OBJDIR = .objFiles

FILES		= main Serializer

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		=  Serializer.hpp

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CXX) $(OBJ) -o $(NAME)
	@printf "$(_SUCCESS) $(GREEN)- Executable ready.\n$(RESET)"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) $(OPTS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: fclean all

test: $(NAME)
	@printf "$(GRAY)- Running tests...$(RESET)\n"

	@echo "\nTest: Normal Case (42)"
	@./$(NAME) 42 || printf "$(RED)Error during test: 42$(RESET)\n"

	@echo "\nTest: Normal Case (3.14)"
	@./$(NAME) 3.14 || printf "$(RED)Error during test: 3.14$(RESET)\n"

	@echo "\nTest: Pseudo-Literal (nan)"
	@./$(NAME) nan || printf "$(RED)Error during test: nan$(RESET)\n"

	@echo "\nTest: Pseudo-Literal (+inf)"
	@./$(NAME) +inf || printf "$(RED)Error during test: +inf$(RESET)\n"

	@echo "\nTest: Pseudo-Literal (-inf)"
	@./$(NAME) -inf || printf "$(RED)Error during test: -inf$(RESET)\n"

	@echo "\nTest: Invalid Input (invalid)"
	@./$(NAME) invalid || printf "$(RED)Error during test: invalid$(RESET)\n"

	@printf "$(GREEN)- All tests completed.$(RESET)\n"

.PHONY: all clean fclean re bonus norm