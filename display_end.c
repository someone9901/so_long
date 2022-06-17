/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_end.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:04:57 by aamssafi          #+#    #+#             */
/*   Updated: 2022/05/16 23:14:15 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	p_next_to_door(t_map *map)
{
	if (map->player_position_x == map->door_position_x
		&& map->player_position_y == map->door_position_y)
		return (1);
	return (0);
}

void	display_end(t_map *map)
{
	static int	i;

	i = 0;
	mlx_clear_window(map->mlx_ptr, map->win_ptr);
	exit(0);
}
