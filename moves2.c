/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:05:19 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/17 07:29:17 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_close(t_map *map)
{
	(void)map;
	exit(0);
}

void	ft_key_move_p_right(t_map *map)
{
	if (map->map_parsing[map->player_position_y]
		[map->player_position_x + 1] == '0')
	{
		move_p_right (map);
		ft_printf("moves number : %d\n", ++map->moves_count);
	}
	else if (map->map_parsing[map->player_position_y]
		[map->player_position_x + 1] == 'C')
	{
		move_p_right(map);
		map->coin_count -= 1;
	}
}

void	ft_key_move_p_left(t_map *map)
{
	if (map->map_parsing[map->player_position_y]
		[map->player_position_x - 1] == '0')
	{
		move_p_left(map);
		ft_printf("moves number : %d\n", ++map->moves_count);
	}
	else if (map->map_parsing[map->player_position_y]
		[map->player_position_x - 1] == 'C')
	{
		move_p_left(map);
		map->coin_count -= 1;
	}
}

void	ft_key_move_p_down(t_map *map)
{
	if (map->map_parsing[map->player_position_y + 1]
		[map->player_position_x] == '0')
	{
		move_p_down(map);
		ft_printf("moves number : %d\n", ++map->moves_count);
	}
	else if (map->map_parsing[map->player_position_y + 1]
		[map->player_position_x] == 'C')
	{
		move_p_down(map);
		map->coin_count -= 1;
	}
}

void	ft_key_move_p_up(t_map *map)
{
	if (map->map_parsing[map->player_position_y - 1]
		[map->player_position_x] == '0')
	{
		move_p_up(map);
		ft_printf("moves number : %d\n", ++map->moves_count);
	}
	else if (map->map_parsing[map->player_position_y - 1]
		[map->player_position_x] == 'C')
	{
		move_p_up(map);
		map->coin_count -= 1;
	}
}
