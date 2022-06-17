/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:05:15 by aamssafi          #+#    #+#             */
/*   Updated: 2022/05/10 17:51:17 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_p_down(t_map *map)
{
	map->map_parsing[map->player_position_y + 1][map->player_position_x] = 'P';
	map->map_parsing[map->player_position_y][map->player_position_x] = '0';
	map->player_position_y += 1;
}

void	move_p_up(t_map *map)
{
	map->map_parsing[map->player_position_y - 1][map->player_position_x] = 'P';
	map->map_parsing[map->player_position_y][map->player_position_x] = '0';
	map->player_position_y -= 1;
}

void	move_p_right(t_map *map)
{
	map->map_parsing[map->player_position_y][map->player_position_x + 1] = 'P';
	map->map_parsing[map->player_position_y][map->player_position_x] = '0';
	map->player_position_x += 1;
}

void	move_p_left(t_map *map)
{
	map->map_parsing[map->player_position_y][map->player_position_x - 1] = 'P';
	map->map_parsing[map->player_position_y][map->player_position_x] = '0';
	map->player_position_x -= 1;
}

void	swich_door(t_map *map)
{
	map->map_parsing[map->door_position_y][map->door_position_x] = '0';
	mlx_put_image_to_window(map->mlx_ptr, map->win_ptr, map->door_opened_img,
		map->door_position_x * 80, map->door_position_y * 80);
}
