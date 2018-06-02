/*
** EPITECH PROJECT, 2018
** PSU_zappy_2017
** File description:
** Entity handling
*/

#pragma once
#include <stdio.h>
#include "containers.h"
#include "inventory.h"
#include "space.h"
#include "team.h"

typedef struct entity_s entity_t;
typedef struct player_s player_t;

struct entity_s
{
	inventory_t inventory;
	direction_t facing;
	position_t pos;
	team_t *team;
	short level;
};

struct player_s
{
	entity_t entity;
	FILE *stream;
	int fd;
	queue_t *commands;
};

player_t *player_create(int fd);
