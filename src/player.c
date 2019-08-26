/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   player.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvreeke <nvreeke@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/22 15:54:54 by nvreeke        #+#    #+#                */
/*   Updated: 2019/08/26 14:11:42 by jvisser       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

#include "../includes/xlm.h"
#include "../includes/map.h"
#include "../includes/bool.h"
#include "../includes/error.h"
#include "../includes/player.h"

static void	set_player_pos(int x, int y, t_player **player, t_map *map)
{
	(*player)->posx = (double)x + 0.5;
	(*player)->posy = (double)y + 0.5;
	map->level[y][x] = 0;
}

static void	determine_player_pos(t_player **player, t_map *map)
{
	int		x;
	int		y;
	int		seen_player;

	y = 0;
	seen_player = 0;
	while (y < map->size_y)
	{
		x = 0;
		while (x < map->size_x)
		{
			if (map->level[y][x] == 999)
			{
				if (seen_player == 1)
					exit_msg("More than one spawnpoint found");
				set_player_pos(x, y, player, map);
				seen_player = 1;
			}
			x++;
		}
		y++;
	}
	if (seen_player == 0)
		exit_msg("No spawnpoint found");
}

/*
**	Initializes Player
*/

t_player	*init_player(t_map *map)
{
	t_player	*player;

	player = MEM(t_player);
	if (!player)
		exit_failure_errno();
	(void)map;
	determine_player_pos(&player, map);
	player->dirx = 0.5;
	player->diry = 0.5;
	player->planex = -0.5;
	player->planey = 0.5;
	player->ms = 0.13;
	player->ammo = 12;
	player->hp = 100;
	return (player);
}
