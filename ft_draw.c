/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:04:53 by aamssafi          #+#    #+#             */
/*   Updated: 2022/05/06 22:36:19 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_draw_wall(t_map *map)
{
	mlx_put_image_to_window(map->mlx_ptr, map->win_ptr,
		map->wall_img, map->map_x, map->map_y);
}

void	ft_draw_floor(t_map *map)
{
	mlx_put_image_to_window(map->mlx_ptr, map->win_ptr,
		map->yajora_img, map->map_x, map->map_y);
}

void	ft_draw_coin(t_map *map)
{
	mlx_put_image_to_window(map->mlx_ptr, map->win_ptr,
		map->coin_img, map->map_x, map->map_y);
}

void	ft_draw_door(t_map *map)
{
	mlx_put_image_to_window(map->mlx_ptr, map->win_ptr,
		map->door_locked_img, map->map_x, map->map_y);
}

void	ft_draw_player(t_map *map)
{
	mlx_put_image_to_window(map->mlx_ptr, map->win_ptr,
		map->player_img, map->map_x, map->map_y);
}
