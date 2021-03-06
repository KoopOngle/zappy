/*
** EPITECH PROJECT, 2018
** zappy
** File description:
** Egg representation header
*/

#pragma once
#include <sys/time.h>
#include "game.h"
#include "space.h"
#include "team.h"
#include "containers.h"

#define EGG_LAYING_TIME 600

typedef struct egg_s egg_t;

struct egg_s {
	position_t pos;
	int id;
	team_t *team;
	struct timeval laying_time;
};

void hatch_egg(game_t *);
