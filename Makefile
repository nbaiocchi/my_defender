##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## t
##

SRC		=	./src/my_defender.c						\
			./src/create/create_all.c				\
			./src/create/pose.c						\
			./src/create/music.c					\
			./src/create/fonction.c					\
			./src/create/text.c						\
			./src/create/my_clock.c					\
			./src/create/rect.c						\
			./src/create/malloc.c					\
			./src/create/variable.c					\
			./src/create/destroy.c					\
			./src/create/sprite.c					\
			./src/create/sprite_emy.c				\
			./src/menu/menu_princ.c					\
			./src/menu/champ_select.c				\
			./src/menu/intro.c						\
			./src/menu/pause_menu.c					\
			./src/menu/explain_menu.c				\
			./src/window/my_window.c				\
			./src/window/check_square.c				\
			./src/window/redirection.c				\
			./src/window/mouse_press.c				\
			./src/map/green_weapon.c				\
			./src/map/red_weapon.c					\
			./src/map/black_weapon.c				\
			./src/map/pose_weapon.c					\
			./src/map/pose_upgrade.c				\
			./src/map/cds_upgrade.c					\
			./src/map/cds_pose_weapon.c				\
			./src/map/rect_black.c					\
			./src/map/rect_red.c					\
			./src/map/rect_green.c					\
			./src/enemy/enemy.c						\
			./src/enemy/pose_enemy.c				\
			./src/enemy/shot_gun.c					\

OBJ		=	$(SRC:.c=.o)

NAME	=	my_defender

CFLAGS	=	-W -Wall -Wextra -g

all:	$(NAME)
		@echo -e "\033[0;34m<$(NAME) has been created>\033[00m"

$(NAME):	$(OBJ)
	gcc $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -o $(NAME)
	@echo -e "\033[0;34m<deleted all .o>\033[00m"
	rm -f $(OBJ)

clean:
	@echo -e "\033[0;34m<Deleting useless files>\033[00m"
	rm -f $(OBJ)

fclean:    clean
	rm -f $(NAME)

re:	fclean all