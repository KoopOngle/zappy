##
## EPITECH PROJECT, 2018
## PSU_zappy_2017
## File description:
## Makefile for server
##

NAME		:= ../zappy_server
SRC		:= src/main.c \
		   src/communication.c \
		   src/containers/list.c \
		   src/containers/queue.c \
		   src/inventory.c \
		   src/loop.c \
		   src/parse.c \
		   src/player.c \
		   src/space.c \
		   src/team.c \
		   src/events.c	\
		   src/food.c \
		   src/leave.c \
		   src/incantations.c \
		   src/map_fill.c \
		   src/commands.c \
		   src/commands/left.c \
		   src/commands/right.c \
		   src/commands/forward.c \
		   src/commands/inventory.c \
		   src/commands/connect_nbr.c \
		   src/commands/broadcast.c \
		   src/commands/look.c \
		   src/commands/take.c \
		   src/commands/set.c \
		   src/commands/incantation.c \
		   src/commands/incantation_send.c \
		   src/commands/eject.c \
		   src/commands/fork.c \
		   src/graphical_protocol/handle_input.c \
		   src/graphical_protocol/protocol_init.c \
		   src/graphical_protocol/egg_notify.c \
		   src/graphical_protocol/incantation_notify.c \
		   src/graphical_protocol/player_notify.c \
		   src/graphical_protocol/new_player_notify.c \
		   src/graphical_protocol/event_notify.c \
		   src/graphical_protocol/ressource_notify.c

CC		:= gcc
RM		:= rm -f

CFLAGS		:= -Wall -Wextra -g3
CPPFLAGS	:= -Iinclude

$(NAME): $(SRC:src/%.c=obj/%.o)
	$(CC) $(OUTPUT_OPTION) $(CFLAGS) $^ $(LDFLAGS) $(LDLIBS)
	-echo -e "\e[1mlinked '$@'\e[0m"

obj/%.o: src/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(OUTPUT_OPTION) -c $(CFLAGS) $(CPPFLAGS) $^
	@-echo "built '$@'"

clean:
	-$(RM) -v $(SRC:src/%.c=obj/%.o)
	-$(RM) -r obj

fclean: clean
	-$(RM) -v $(NAME)

.SILENT: clean fclean $(NAME) obj/%.o

.PHONY: clean fclean
