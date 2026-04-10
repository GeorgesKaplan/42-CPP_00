NAME		= Account
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -g
SRCS_DIR	= srcs/
OBJS_DIR	= objs/
INCLUDES	= -Iincludes
SRCS		=	test.cpp \
				\
				classes/Account.cpp
SRCS		:= $(addprefix $(SRCS_DIR), $(SRCS))
OBJS		:= $(SRCS:$(SRCS_DIR)%.cpp=$(OBJS_DIR)%.o)

all: $(NAME)
	@echo "$(NAME) created!"

$(NAME): $(OBJS)
	@echo "Creating program."
	@$(COMP) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.cpp
	@echo "Compiling .cpp files..."
	@mkdir -p $(dir $@)
	@$(COMP) $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	@clear
	@echo "Removing object files."
	@rm -f $(OBJS)

fclean: clean
	@echo "Removing $(NAME) executable file."
	@rm -f $(NAME)

re: fclean all
