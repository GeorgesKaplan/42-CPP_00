NAME		= megaphone
COMP		= c++
FLAGS		= -Wall -Wextra -Werror
SRCS_DIR	= srcs/
OBJS_DIR	= objs/
SRCS		= megaphone.cpp
SRCS		:= $(addprefix $(SRCS_DIR), $(SRCS))
OBJS		:= $(SRCS:$(SRCS_DIR)%.c=$(OBJS_DIR)%.o)

all: $(NAME)
	@echo "$(NAME) created!"

$(NAME):
	@echo "Creating program."
	@$(COMP) $(FLAGS) $(SRCS) -o $(NAME)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	@echo "Compiling .cpp files..."
	@mkdir -p $(dir $@)
	@$(COMP) $(FLAGS) -c $< -o $@

clean:
	@clear
	@echo "Removing object files."
	@rm -f $(OBJS)

fclean: clean
	@clear
	@rm -f $(NAME)

re:
	@fclean
	@all
