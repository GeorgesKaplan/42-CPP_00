NAME		 = phonebook
COMP		 = c++
FLAGS		 = -Wall -Wextra -Werror
SRCS_DIR	 = srcs/
SRCS		 = phonebook.cpp
INCLUDES	:= -Iincludes
SRCS		:= $(addprefix $(SRCS_DIR), $(SRCS))


all: $(NAME)
	@echo "$(NAME) created!"

$(NAME):
	@echo "Creating program."
	@$(COMP) $(FLAGS) $(INCLUDES) $(SRCS) -o $(NAME)

fclean:
	@clear
	@rm -f $(NAME)

re: fclean all
