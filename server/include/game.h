/*
** EPITECH PROJECT, 2018
** PSU_zappy_2017
** File description:
** game_t header
*/

#pragma once
#include <stdio.h>
#include "sys/epoll.h"
#include "containers.h"
#include "space.h"
#include "team.h"

typedef struct game_s game_t;

struct game_s {
	map_t *map;
	team_t *teams;
	list_t *players;
	list_t *incantations;
	queue_t *hatching_eggs;
	int freq;
	FILE *graph_stream;
};

void map_fill(FILE *, game_t*);
