/*
** EPITECH PROJECT, 2018
** PSU_zappy_2017
** File description:
** function
*/

#include <stdlib.h>
#include <string.h>
#include "team.h"

/// Extract all team names from program arguments
team_t *team_get_names(char *av[], int start, int slots)
{
	team_t *teams = NULL;
	int count = 0;

	for (; av[start] != NULL && av[start][0] != '-'; start++) {
		teams = realloc(teams, (count + 2) * sizeof(team_t));
		teams[count++] = (team_t) {av[start], slots, 0};
	}
	memset(teams + count, 0, sizeof(team_t));
	return (teams);
}

/// Destroys a team_t array created by team_get_names
void teams_destroy(team_t *teams)
{
	int i = 0;

	while (teams[i].name != NULL) {
		free(teams[i].name);
	}
	free(teams);
}
